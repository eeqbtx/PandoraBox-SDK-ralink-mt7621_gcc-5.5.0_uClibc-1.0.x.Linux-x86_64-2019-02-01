/**
 * @file libyang.h
 * @author Radek Krejci <rkrejci@cesnet.cz>
 * @brief The main libyang public header.
 *
 * Copyright (c) 2015-2016 CESNET, z.s.p.o.
 *
 * This source code is licensed under BSD 3-Clause License (the "License").
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     https://opensource.org/licenses/BSD-3-Clause
 */

#ifndef LY_LIBYANG_H_
#define LY_LIBYANG_H_

#include <stdio.h>
#include <unistd.h>

#include "tree_schema.h"
#include "tree_data.h"
#include "xml.h"
#include "dict.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @mainpage About
 *
 * libyang is a library implementing processing of the YANG schemas and data modeled by the YANG language. The
 * library is implemented in C for GNU/Linux and provides C API.
 *
 * @section about-features Main Features
 *
 * - Parsing (and validating) schemas in YANG format.
 * - Parsing (and validating) schemas in YIN format.
 * - Parsing, validating and printing instance data in XML format.
 * - Parsing, validating and printing instance data in JSON format.
 * - Manipulation with the instance data.
 * - Support for adding default values into instance data.
 *
 * The current implementation covers YANG 1.0 specified in [RFC 6020](https://tools.ietf.org/html/rfc6020).
 * Future plans include support for [YANG 1.1](https://tools.ietf.org/html/draft-ietf-netmod-rfc6020bis-11).
 *
 * @subsection about-features-others Extra (side-effect) Features
 *
 * - XML parser.
 * - Optimized string storage (dictionary).
 *
 * @section about-license License
 *
 * Copyright (c) 2015-2016 CESNET, z.s.p.o.
 *
 * (The BSD 3-Clause License)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name of the Company nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 */

/**
 * @page howto How To ...
 *
 * - @subpage howtocontext
 * - @subpage howtoschemas
 * - @subpage howtodata
 * - @subpage howtoxpath
 * - @subpage howtoxml
 * - @subpage howtothreads
 * - @subpage howtologger
 */

/** @page howtocontext Context
 *
 * The context concept allows callers to work in environments with different sets of YANG schemas.
 *
 * The first step in libyang is to create a new context using ly_ctx_new(). It returns a handler
 * used in the following work.
 *
 * When creating a new context, search dir can be specified (NULL is accepted) to provide directory
 * where libyang will automatically search for schemas being imported or included. The search path
 * can be later changed via ly_ctx_set_searchdir() function. Before exploring the specified search
 * dir, libyang tries to get imported and included schemas from the current working directory first.
 * This automatic searching can be completely avoided when the caller sets module searching callback
 * (#ly_module_clb) via ly_ctx_set_module_clb().
 *
 * Schemas are added into the context using [parser functions](@ref howtoschemasparsers) - \b lys_parse_*().
 * In case of schemas, also ly_ctx_load_module() can be used - in that case the #ly_module_clb or automatic
 * search in working directory and in the searchpath is used.
 *
 * Similarly, data trees can be parsed by \b lyd_parse_*() functions. Note, that functions for schemas have \b lys_
 * prefix while functions for instance data have \b lyd_ prefix.
 *
 * Context can hold multiple revisons of the same schema.
 *
 * Context holds all modules and their submodules internally and they can appear in multiple revisions. To get
 * a specific module or submodule, use ly_ctx_get_module() and ly_ctx_get_submodule(). There are some additional
 * alternatives to these functions (with different parameters_. If you need to do something with all the modules or
 * submodules in the context, it is advised to iterate over them using ly_ctx_get_module_iter(), it is
 * the most efficient way. Alternatively, the ly_ctx_info() function can be used to get complex information
 * about the schemas in the context in the form of data tree defined by
 * <a href="https://tools.ietf.org/html/draft-ietf-netconf-yang-library-04">ietf-yang-library</a> schema.
 * To get a specific node defined in a module in the context, ly_ctx_get_node() and ly_ctx_get_node2() can be used.
 * They differ in parameters used to identify the schema node.
 *
 * Modules held by a context cannot be removed one after one. The only way how to \em change modules in the
 * context is to create a new context and remove the old one. To remove a context, there is ly_ctx_destroy()
 * function.
 *
 * - @subpage howtocontextdict
 *
 * \note API for this group of functions is available in the [context module](@ref context).
 *
 * Functions List
 * --------------
 * - ly_ctx_new()
 * - ly_ctx_set_searchdir()
 * - ly_ctx_get_searchdir()
 * - ly_ctx_set_module_clb()
 * - ly_ctx_get_module_clb()
 * - ly_ctx_load_module()
 * - ly_ctx_info()
 * - ly_ctx_get_module_iter()
 * - ly_ctx_get_module()
 * - ly_ctx_get_module_older()
 * - ly_ctx_get_module_by_ns()
 * - ly_ctx_get_submodule()
 * - ly_ctx_get_submodule2()
 * - ly_ctx_get_node()
 * - ly_ctx_get_node2()
 * - ly_ctx_destroy()
 */

/**
 * @page howtocontextdict Context Dictionary
 *
 * Context includes dictionary to store strings more effectively. The most of strings repeats quite often in schema
 * as well as data trees. Therefore, instead of allocating those strings each time they appear, libyang stores them
 * as records in the dictionary. The basic API to the context dictionary is public, so even a caller application can
 * use the dictionary.
 *
 * To insert a string into the dictionary, caller can use lydict_insert() (adding a constant string) or
 * lydict_insert_zc() (for dynamically allocated strings that won't be used by the caller after its insertion into
 * the dictionary). Both functions return the pointer to the inserted string in the dictionary record.
 *
 * To remove (reference of the) string from the context dictionary, lydict_remove() is supposed to be used.
 *
 * \note Incorrect usage of the dictionary can break libyang functionality.
 *
 * \note API for this group of functions is described in the [XML Parser module](@ref dict).
 *
 * Functions List
 * --------------
 * - lydict_insert()
 * - lydict_insert_zc()
 * - lydict_remove()
 */

/**
 * @page howtoschemas Schemas
 *
 *
 * Schema is an internal libyang's representation of a YANG data model. Each schema is connected with
 * its [context](@ref howtocontext) and loaded using [parser functions](@ref howtoschemasparsers). It means, that
 * the schema cannot be created (nor changed) programmatically. In libyang, schemas are used only to
 * access data model definitions.
 *
 * Schema tree nodes are able to hold private objects (via a pointer to a structure, function, variable, ...) used by
 * a caller application. Such an object can be assigned to a specific node using lys_set_private() function.
 * Note that the object is not freed by libyang when the context is being destroyed. So the caller is responsible
 * for freeing the provided structure after the context is destroyed or the private pointer is set to NULL in
 * appropriate schema nodes where the object was previously set. This can be automated via destructor function
 * to free these private objects. The destructor is passed to the ly_ctx_destroy() function. On the other hand,
 * freeing the object while the schema tree is still in use can lead to a segmentation fault.
 *
 * - @subpage howtoschemasparsers
 * - @subpage howtoschemasfeatures
 * - @subpage howtoschemasprinters
 *
 * \note There are many functions to access information from the schema trees. Details are available in
 * the [Schema Tree module](@ref schematree).
 *
 * Functions List (not assigned to above subsections)
 * --------------------------------------------------
 * - lys_getnext()
 * - lys_parent()
 * - lys_module()
 * - lys_node_module()
 * - lys_set_private()
 */

/**
 * @page howtoschemasparsers Parsing Schemas
 *
 * Schema parser allows to read schema from a specific format. libyang supports the following schema formats:
 *
 * - YANG
 *
 *   Basic YANG schemas format described in [RFC 6020](http://tools.ietf.org/html/rfc6020).
 *   Currently, only YANG 1.0 is supported.
 *
 * - YIN
 *
 *   Alternative XML-based format to YANG - YANG Independent Notation. The details can be found in
 *   [RFC 6020](http://tools.ietf.org/html/rfc6020#section-11).
 *
 * When the [context](@ref howtocontext) is created, it already contains the following three schemas, which
 * are implemented internally by libyang:
 * - ietf-inet-types@2013-07-15
 * - ietf-yang-types@2013-07-15
 * - ietf-yang-library@2015-07-03
 * - yang@2016-02-11
 *
 * The last one is libyang's internal module to provide namespace for various YANG attributes defined in RFC 6020
 * (such as `insert` attribute for edit-config's data).
 *
 * Other schemas can be added to the context manually as described in [context page](@ref howtocontext) by the functions
 * listed below. Besides the schema parser functions, it is also possible to use ly_ctx_load_module() which tries to
 * find the required schema automatically - using #ly_module_clb or automatic search in working directory and in the
 * context's searchpath.
 *
 * Functions List
 * --------------
 * - lys_parse_mem()
 * - lys_parse_fd()
 * - lys_parse_path()
 * - ly_ctx_set_module_clb()
 * - ly_ctx_load_module()
 */

/**
 * @page howtoschemasfeatures YANG Features Manipulation
 *
 * The group of functions prefixed by \b lys_features_ are used to access and manipulate with the schema's
 * features.
 *
 * The first two functions are used to access information about the features in the schema.
 * lys_features_list() provides list of all features defined in the specific schema and its
 * submodules. Optionally, it can also provide information about the state of all features.
 * Alternatively, caller can use lys_features_state() function to get state of one specific
 * feature.
 *
 * The remaining two functions, lys_features_enable() and lys_features_disable(), are used
 * to enable and disable the specific feature (or all via the '`*`' value). By default, when the module
 * is loaded by libyang parser, all features are disabled.
 *
 * To get know, if a specific schema node is currently disabled or enable, the lys_is_disabled() function can be used.
 *
 * Note, that the feature's state can affect some of the output formats (e.g. Tree format).
 *
 * Functions List
 * --------------
 * - lys_features_list()
 * - lys_features_enable()
 * - lys_features_disable()
 * - lys_features_state()
 * - lys_is_disabled()
 */

/**
 * @page howtoschemasprinters Printing Schemas
 *
 * Schema printers allows to serialize internal representation of a schema module in a specific format. libyang
 * supports the following schema formats for printing:
 *
 * - YANG
 *
 *   Basic YANG schemas format described in [RFC 6020](http://tools.ietf.org/html/rfc6020).
 *   Currently, only YANG 1.0 is supported.
 *
 * - YIN
 *
 *   Alternative XML-based format to YANG - YANG Independent Notation. The details can be found in
 *   [RFC 6020](http://tools.ietf.org/html/rfc6020#section-11).
 *
 * - Tree
 *
 *   Simple tree structure of the module where each node is printed as:
 *
 *       <status> <flags> <name> <opts> <type> <if-features>
 *
 *   - `<status>` is one of:
 *     - `+` for current
 *     - `x` for deprecated
 *     - `o` for obsolete
 *
 *   - `<flags>` is one of:
 *     - `rw` for configuration data
 *     - `ro` for status data
 *     - `-x` for RPCs
 *     - `-n` for Notification
 *
 *   - `<name>` is the name of the node
 *     - `(<name>)` means that the node is a choice node
 *     - `:(<name>)` means that the node is a case node
 *     - if the node is augmented into the tree from another module, it is printed with the module name as
 *     `<module-name>:<name>`.
 *
 *   - `<opts>` is one of:
 *     - `?` for an optional leaf or choice
 *     - `!` for a presence container
 *     - `*` for a leaf-list or list
 *     - `[<keys>]` for a list's keys
 *
 *   - `<type>` is the name of the type for leafs and leaf-lists
 *     - if there is a default value defined, it is printed within angle brackets `<default-value>`
 *     - if the type is a leafref, the type is printed as -> TARGET`
 *
 *   - `<if-features>` is the list of features this node depends on, printed within curly brackets and
 *     a question mark `{...}?`
 *
 *
 * - Info
 *
 *   Detailed information about the specific node in the schema tree.
 *   It allows to print information not only about a specific module, but also about its specific part:
 *
 *   - absolute-schema-nodeid
 *
 *     e.g. \a `/modules/module-set-id`  in \a `ietf-yang-library` module
 *
 *   - <b>typedef/</b>typedef-name
 *
 *     e.g. \a `typedef/revision-identifier` in \a `ietf-yang-library` module
 *
 *   - <b>feature/</b>feature-name
 *
 *     e.g. \a `feature/ssh` in \a `ietf-netconf-server` module
 *
 *   - <b>grouping/</b>grouping-name/descendant-schema-nodeid
 *
 *     e.g. \a `grouping/module` or \a `grouping/module/module/submodules` in \a `ietf-yang-library` module
 *
 *   - <b>type/</b>leaf-or-leaflist
 *
 *     e.g. \a `type/modules/module-set-id` in \a `ietf-yang-library` module
 *
 * Printer functions allow to print to the different outputs including a callback function which allows caller
 * to have a full control of the output data - libyang passes to the callback a private argument (some internal
 * data provided by a caller of lys_print_clb()), string buffer and number of characters to print. Note that the
 * callback is supposed to be called multiple times during the lys_print_clb() execution.
 *
 * Functions List
 * --------------
 * - lys_print_mem()
 * - lys_print_fd()
 * - lys_print_file()
 * - lys_print_clb()
 */

/**
 * @page howtodata Data Instances
 *
 * All data nodes in data trees are connected with their schema node - libyang is not able to represent data of an
 * unknown schema.
 *
 * By default, the represented data are supposed to represent a full YANG datastore content. So if a schema declares
 * some mandatory nodes, despite configuration or status, the data are supposed to be present in the data tree being
 * loaded or validated. However, it is possible to specify other kinds of data (see @ref parseroptions) allowing some
 * exceptions to the validation process.
 *
 * Data validation is performed implicitly to the input data processed by the parser (\b lyd_parse_*() functions) and
 * on demand via the lyd_validate() function. The lyd_validate() is supposed to be used when a (complex or simple)
 * change is done on the data tree (via a combination of \b lyd_change_*(), \b lyd_insert*(), \b lyd_new*(),
 * lyd_unlink() and lyd_free() functions).
 *
 * - @subpage howtodataparsers
 * - @subpage howtodatamanipulators
 * - @subpage howtodatawd
 * - @subpage howtodataprinters
 *
 * \note API for this group of functions is described in the [Data Instances module](@ref datatree).
 *
 * Functions List (not assigned to above subsections)
 * --------------------------------------------------
 * - lyd_get_node()
 * - lyd_get_node2()
 */

/**
 * @page howtodataparsers Parsing Data
 *
 * Data parser allows to read instances from a specific format. libyang supports the following data formats:
 *
 * - XML
 *
 *   Original data format used in NETCONF protocol. XML mapping is part of the YANG specification
 *   ([RFC 6020](http://tools.ietf.org/html/rfc6020)).
 *
 * - JSON
 *
 *   The alternative data format available in RESTCONF protocol. Specification of JSON encoding of data modeled by YANG
 *   can be found in [this draft](https://tools.ietf.org/html/draft-ietf-netmod-yang-json-05).
 *
 * Besides the format of input data, the parser functions accepts additional [options](@ref parseroptions) to specify
 * how the input data should be processed.
 *
 * In contrast to the schema parser, data parser also accepts empty input data if such an empty data tree is valid
 * according to the schemas in the libyang context.
 *
 * In case of XML input data, there is one additional way to parse input data. Besides parsing the data from a string
 * in memory or a file, caller is able to build an XML tree using [libyang XML parser](@ref howtoxml) and then use
 * this tree (or a part of it) as input to the lyd_parse_xml() function.
 *
 * Functions List
 * --------------
 * - lyd_parse_mem()
 * - lyd_parse_fd()
 * - lyd_parse_path()
 * - lyd_parse_xml()
 */

/**
 * @page howtodatamanipulators Manipulating Data
 *
 * There are many functions to create or modify an existing data tree. You can add new nodes, reconnect nodes from
 * one tree to another (or e.g. from one list instance to another) or remove nodes. The functions doesn't allow you
 * to put a node to a wrong place (by checking the module), but not all validation checks can be made directly
 * (or you have to make a valid change by multiple tree modifications) when the tree is being changed. Therefore,
 * there is lyd_validate() function supposed to be called to make sure that the current data tree is valid. If
 * working with RPCs, they are invalid also in case the data nodes are not ordered according to the schema, which
 * you can fix easily with lyd_schema_sort(). Note, that not performing validation after some data tree changes
 * can cause failure of various libyang functions later.
 *
 * Creating data is generally possible in two ways, they can be combined. You can add nodes one-by-one based on
 * the node name and/or its parent (lyd_new(), lyd_new_anyxml_*(), lyd_new_leaf(), and their output variants) or
 * address the nodes using a simple XPath addressing (lyd_new_path()). The latter enables to create a whole path
 * of nodes, requires less information about the modified data, and is generally simpler to use. The path format
 * specifics can be found [here](@ref howtoxpath).
 *
 * Working with two data subtrees can also be preformed two ways. Usually, you should use lyd_insert*() functions.
 * But they always work with a single subtree and it must be placed on an exact and correct location in the other
 * tree. If using lyd_merge(), this information is learnt internally and duplicities (that would invalidate
 * the final data tree) are filtered out at the cost of somewhat reduced effectivity.
 *
 * Also remember, that when you are creating/inserting a node, all the objects in that operation must belong to the
 * same context.
 *
 * Modifying the single data tree in multiple threads is not safe.
 *
 * Functions List
 * --------------
 * - lyd_dup()
 * - lyd_change_leaf()
 * - lyd_insert()
 * - lyd_insert_before()
 * - lyd_insert_after()
 * - lyd_insert_attr()
 * - lyd_merge()
 * - lyd_new()
 * - lyd_new_anyxml_str()
 * - lyd_new_anyxml_xml()
 * - lyd_new_leaf()
 * - lyd_new_path()
 * - lyd_new_output()
 * - lyd_new_output_anyxml_str()
 * - lyd_new_output_anyxml_xml()
 * - lyd_new_output_leaf()
 * - lyd_schema_sort()
 * - lyd_unlink()
 * - lyd_free()
 * - lyd_free_attr()
 * - lyd_free_withsiblings()
 * - lyd_validate()
 */

/**
 * @page howtodatawd Default Values
 *
 * libyang provide support for work with default values as defined in [RFC 6243](https://tools.ietf.org/html/rfc6243).
 * This document defines 4 modes for adding/removing default nodes to/from a data tree, libyang adds the fifth mode:
 * - \b explicit - Only the explicitly set configuration data. But in the case of status data, missing default
 *                 data are added into the tree. In libyang, this mode is represented by #LYD_WD_EXPLICIT option.
 * - \b trim - Data nodes containing the schema default value are removed. This mode is applied using #LYD_WD_TRIM option.
 * - \b report-all - All the missing default data are added into the data tree. This mode is represented by
 *                 #LYD_WD_ALL option.
 * - \b report-all-tagged - In this case, all the missing default data are added as in case of the `report-all` mode,
 *                 but additionally all the nodes (existing as well as added) containing the schema default value
 *                 are tagged (see the note below). libyang uses #LYD_WD_ALL_TAG option for this mode.
 * - \b report-implicit-tagged - The last mode is similar to the previous one, except only the added nodes are tagged.
 *                 This is the libyang's extension and it is represented by #LYD_WD_IMPL_TAG option.
 *
 * In the data nodes, the tag is represented as set ::lyd_node's `dflt` member. However, when the data tree is printed,
 * the tag is automatically printed as XML/JSON attribute as defined in [RFC 6243](https://tools.ietf.org/html/rfc6243).
 * This conversion is done only if the context includes the ietf-netconf-with-defaults schema. Otherwise, both
 * #LYD_WD_ALL_TAG and #LYD_WD_IMPL_TAG have the same result as #LYD_WD_ALL.
 *
 * The base function for with-defaults capability is lyd_wd_add(), which modifies the data tree according to the
 * required with-defaults mode. However, the with-defaults modes can be applied directly by the data parser
 * functions and by lyd_validate().
 *
 * With the lyd_wd_cleanup(), caller is able to remove all the data nodes marked with the defaults tag (set via
 * #LYD_WD_ALL_TAG or #LYD_WD_IMPL_TAG).
 *
 * Functions List
 * --------------
 * - lyd_wd_add()
 * - lyd_wd_cleanup()
 *
 * - lyd_parse_mem()
 * - lyd_parse_fd()
 * - lyd_parse_path()
 * - lyd_parse_xml()
 * - lyd_validate()
 */

/**
 * @page howtodataprinters Printing Data
 *
 * Data printers allows to serialize internal representation of a data tree in a specific format. libyang
 * supports the following data formats for printing:
 *
 * - XML
 *
 *   Basic format as specified in rules of mapping YANG modeled data to XML in
 *   [RFC 6020](http://tools.ietf.org/html/rfc6020). It is possible to specify if
 *   the indentation (formatting) will be used (by #LYP_FORMAT @ref printerflags "printer option").
 *
 * - JSON
 *
 *   The alternative data format available in RESTCONF protocol. Specification of JSON encoding of data modeled by YANG
 *   can be found in [this draft](https://tools.ietf.org/html/draft-ietf-netmod-yang-json-05).It is possible to specify
 *   if the indentation (formatting) will be used (by #LYP_FORMAT @ref printerflags "printer option").
 *
 * Printer functions allow to print to the different outputs including a callback function which allows caller
 * to have a full control of the output data - libyang passes to the callback a private argument (some internal
 * data provided by a caller of lyd_print_clb()), string buffer and number of characters to print. Note that the
 * callback is supposed to be called multiple times during the lyd_print_clb() execution.
 *
 * Functions List
 * --------------
 * - lyd_print_mem()
 * - lyd_print_fd()
 * - lyd_print_file()
 * - lyd_print_clb()
 */

/**
 * @page howtoxpath XPath Addressing
 *
 * Internally, XPath evaluation is performed on \b when and \b must conditions in the schema. For that almost
 * a full XPath 1.0 evaluator was implemented. This XPath implementation is available on data trees by calling
 * lyd_get_node() except that only node sets are returned. This XPath conforms to the YANG specification
 * (RFC 6020 section 6.4). Some useful examples:
 *
 * - get all top-level nodes of the __module-name__
 *
 *       /module-name:*
 *
 * - get all the descendants of __container__ (excluding __container__)
 *
 *       /module-name:container//\asterisk
 *
 * - get __list__ instance with __key1__ of value __1__ and __key2__ of value __2__ (this can return more __list__ instances if there are more keys than __key1__ and __key2__)
 *
 *       /module-name:container/list[key1='1'][key2='2']
 *
 * - get __leaf-list__ instance with the value __val__
 *
 *       /module-name:container/leaf-list[.='val']
 *
 * - get __aug-leaf__, which was added to __module-name__ from an augment module __augment-module__
 *
 *       /module-name:container/container2/augment-module:aug-cont/aug-leaf
 *
 *
 * A very small subset of this full XPath is recognized by lyd_new_path(). Basically, only a relative or absolute
 * path can be specified to identify a new data node. However, lists must be identified by all their keys and created
 * with all of them, so for those cases predicates are allowed. Predicates must be ordered the way the keys are ordered
 * and all the keys must be specified. Every predicate includes a single key with its value. Optionally, leaves and
 * leaf-lists can have predicates specifying their value in the path itself. All these paths are valid XPath
 * expressions. Example:
 *
 *     /ietf-yang-library:modules-state/module[name='ietf-yang-library'][revision='']/conformance[.='implement']
 *
 * Almost the same XPath is accepted by ly_ctx_get_node(). The difference is that it is not used on data, but schema,
 * which means there are no key values and only one node matches one path. In effect, lists do not have to have any
 * predicates. If they do, they do not need to have all the keys specified and if values are included, they are ignored.
 * Nevertheless, any such expression is still a valid XPath, but can return more nodes if executed on a data tree.
 * Examples (all returning the same node):
 *
 *     /ietf-yang-library:modules-state/module/submodules
 *     /ietf-yang-library:modules-state/module[name]/submodules
 *     /ietf-yang-library:modules-state/module[name][revision]/submodules
 *     /ietf-yang-library:modules-state/module[name='ietf-yang-library'][revision]/submodules
 *
 * Also, `choice`, `case`, `input`, and `output` nodes need to be specified and cannot be skipped in schema XPaths. Use
 * ly_ctx_get_node2() if you want to search based on a data XPath, the same format as what lyd_new_path() uses.
 *
 * Also note, that in all cases the node's prefix is specified as the name of the appropriate YANG schema. Any node
 * can be prefixed by the module name. However, if the prefix is omitted, the module name is inherited from the previous
 * (parent) node. It means, that the first node in the path is always supposed to have a prefix.
 *
 * Functions List
 * --------------
 * - lyd_get_node()
 * - lyd_new_path()
 * - ly_ctx_get_node()
 * - ly_ctx_get_node2()
 */

/**
 * @page howtoxml libyang XML Support
 *
 * libyang XML parser is able to parse XML documents. The main purpose is to load data modeled by YANG. However, it can
 * be used as a standalone XML parser with the following limitations in comparison to a full-featured XML parsers:
 * - comments are ignored
 * - Doctype declaration is ignored
 * - CData sections are ignored
 * - Process Instructions (PI) are ignored
 *
 * The API is designed to almost only read-only access. You can simply load XML document, go through the tree as
 * you wish and dump the tree to an output. The only "write" functions are lyxml_free() and lyxml_unlink() to remove
 * part of the tree or to unlink (separate) a subtree.
 *
 * XML parser is used internally by libyang for parsing YIN schemas and data instances in XML format.
 *
 * \note API for this group of functions is described in the [XML Parser module](@ref xmlparser).
 *
 * Functions List
 * --------------
 * - lyxml_parse_mem()
 * - lyxml_parse_path()
 * - lyxml_get_attr()
 * - lyxml_get_ns()
 * - lyxml_print_mem()
 * - lyxml_print_fd()
 * - lyxml_print_file()
 * - lyxml_print_clb()
 * - lyxml_unlink()
 * - lyxml_free()
 */

/**
 * @page howtothreads libyang in Threads
 *
 * libyang can be used in multithreaded applications keeping in mind the following rules:
 * - libyang context manipulation (adding new schemas) is not thread safe and it is supposed to be done in a main
 *   thread before any other work with context, schemas or data instances. Destroying the context is supposed to
 *   be done when no other thread accesses context, schemas nor data trees
 * - Data parser (\b lyd_parse*() functions) can be used simultaneously in multiple threads (also the returned
 *   #ly_errno is thread safe).
 * - Modifying (lyd_new(), lyd_insert(), lyd_unlink(), lyd_free() and many other functions) a single data tree is not
 *   thread safe.
 */

/**
 *
 * @page howtologger Logger
 *
 * There are 4 verbosity levels defined as ::LY_LOG_LEVEL. The level can be
 * changed by the ly_verb() function. By default, the verbosity level is
 * set to #LY_LLERR value.
 *
 * When an error is encountered, the error message and error number are stored for
 * later use. Caller is able to access the last error message via ly_errmsg() and the
 * corresponding last error code via #ly_errno. If that was a validation error (#ly_errno
 * is set to #LY_EVALID), also validation error code (via #ly_vecode) and path to the
 * error node (via ly_errpath()) are available.
 *
 * For some specific cases, a YANG schema can define error message and/or error tag (mainly for
 * use in NETCONF). If a message is set, it is provided via ly_errmsg(). If a tag is set in schema,
 * it is available via ly_erraptag() (if not set, the returned string is empty).
 *
 * By default, all libyang messages are printed to `stderr`. However, the caller is able to set their own logging
 * callback function. In that case, instead of printing messages, libyang passes error level, message and path
 * (if any) to the caller's callback function. In case of error level, the message and path are still
 * automatically stored and available via the functions and macros described above.
 *
 * \note API for this group of functions is described in the [logger module](@ref logger).
 *
 * Functions List
 * --------------
 * - ly_verb()
 * - ly_set_log_clb()
 * - ly_get_log_clb()
 * - ly_errmsg()
 * - ly_errpath()
 * - ly_errapptag()
 * - #ly_errno
 * - #ly_vecode
 */

/**
 * @defgroup context Context
 * @{
 *
 * Structures and functions to manipulate with the libyang "containers". The \em context concept allows callers
 * to work in environments with different sets of YANG schemas. More detailed information can be found at
 * @ref howtocontext page.
 */

/**
 * @brief libyang context handler.
 */
struct ly_ctx;

/**
 * @brief Create libyang context
 *
 * Context is used to hold all information about schemas. Usually, the application is supposed
 * to work with a single context in which libyang is holding all schemas (and other internal
 * information) according to which the data trees will be processed and validated. So, the schema
 * trees are tightly connected with the specific context and they are held by the context internally
 * - caller does not need to keep pointers to the schemas returned by lys_parse(), context knows
 * about them. The data trees created with lyd_parse() are still connected with the specific context,
 * but they are not internally held by the context. The data tree just points and lean on some data
 * held by the context (schema tree, string dictionary, etc.). Therefore, in case of data trees, caller
 * is supposed to keep pointers returned by the lyd_parse() and manage the data tree on its own. This
 * also affects the number of instances of both tree types. While you can have only one instance of
 * specific schema connected with a single context, number of data tree instances is not connected.
 *
 * @param[in] search_dir Directory where libyang will search for the imported or included modules
 * and submodules. If no such directory is available, NULL is accepted.
 *
 * @return Pointer to the created libyang context, NULL in case of error.
 */
struct ly_ctx *ly_ctx_new(const char *search_dir);

/**
 * @brief Change the search path in libyang context
 *
 * @param[in] ctx Context to be modified.
 * @param[in] search_dir New search path to replace the current one in ctx.
 */
void ly_ctx_set_searchdir(struct ly_ctx *ctx, const char *search_dir);

/**
 * @brief Get current value of the search path in libyang context
 *
 * @param[in] ctx Context to query.
 * @return Current value of the search path.
 */
const char *ly_ctx_get_searchdir(const struct ly_ctx *ctx);

/**
 * @brief Get data of an internal ietf-yang-library module.
 *
 * @param[in] ctx Context with the modules.
 * @return Root data node corresponding to the model, NULL on error.
 * Caller is responsible for freeing the returned data tree using lyd_free().
 */
struct lyd_node *ly_ctx_info(struct ly_ctx *ctx);

/**
 * @brief Iterate over all modules in a context.
 *
 * @param[in] ctx Context with the modules.
 * @param[in,out] idx Index of the next module to be returned. Value of 0 starts from the beginning.
 * @return Next context module, NULL if the last was already returned.
 */
const struct lys_module *ly_ctx_get_module_iter(const struct ly_ctx *ctx, uint32_t *idx);

/**
 * @brief Get pointer to the schema tree of the module of the specified name.
 *
 * @param[in] ctx Context to work in.
 * @param[in] name Name of the YANG module to get.
 * @param[in] revision Optional revision date of the YANG module to get. If not specified,
 * the schema in the newest revision is returned if any.
 * @return Pointer to the data model structure, NULL if no schema following the name and
 * revision requirements is present in the context.
 */
const struct lys_module *ly_ctx_get_module(const struct ly_ctx *ctx, const char *name, const char *revision);

/**
 * @brief Get pointer to the older schema tree to the specified one in the provided context.
 *
 * The module is not necessarily from the provided \p ctx. If there are multiple schemas older than the
 * provided one, the newest of them is returned.
 *
 * The function can be used in combination with ly_ctx_get_module() to get all revisions of a module in a context:
 * \code{.c}
 * for (mod = ly_ctx_get_module(ctx, name, NULL); mod; mod = ly_ctx_get_module_older(ctx, mod)) {
 *     ...
 * }
 * \endcode
 *
 * @param[in] ctx Context to work in.
 * @param[in] module YANG module to compare with
 * @return Pointer to the data model structure, NULL if no older schema is present in the context.
 */
const struct lys_module *ly_ctx_get_module_older(const struct ly_ctx *ctx, const struct lys_module *module);

/**
 * @brief Try to find the model in the searchpath of \p ctx and load it into it. If custom missing
 * module callback is set, it is used instead.
 *
 * @param[in] ctx Context to add to.
 * @param[in] name Name of the module to load.
 * @param[in] revision Optional revision date of the module. If not specified, it is
 * assumed that there is only one model revision in the searchpath (the first matching file
 * is parsed).
 * @return Pointer to the data model structure, NULL if not found or some error occured.
 */
const struct lys_module *ly_ctx_load_module(struct ly_ctx *ctx, const char *name, const char *revision);

/**
 * @brief Callback for retrieving missing included or imported models in a custom way.
 *
 * @param[in] name Missing module name.
 * @param[in] revision Optional missing module revision.
 * @param[in] user_data User-supplied callback data.
 * @param[out] format Format of the returned module data.
 * @param[out] free_module_data Callback for freeing the returned module data. If not set, the data will be left untouched.
 * @return Requested module data or NULL on error.
 */
typedef char *(*ly_module_clb)(const char *name, const char *revision, void *user_data, LYS_INFORMAT *format,
                               void (**free_module_data)(void *model_data));

/**
 * @brief Set missing include or import model callback.
 *
 * @param[in] ctx Context that will use this callback.
 * @param[in] clb Callback responsible for returning a missing model.
 * @param[in] user_data Arbitrary data that will always be passed to the callback \p clb.
 */
void ly_ctx_set_module_clb(struct ly_ctx *ctx, ly_module_clb clb, void *user_data);

/**
 * @brief Get the custom callback for missing module retrieval.
 *
 * @param[in] ctx Context to read from.
 * @param[in] user_data Optional pointer for getting the user-supplied callbck data.
 * @return Custom user missing module callback or NULL if not set.
 */
ly_module_clb ly_ctx_get_module_clb(const struct ly_ctx *ctx, void **user_data);

/**
 * @brief Get pointer to the schema tree of the module of the specified namespace
 *
 * @param[in] ctx Context to work in.
 * @param[in] ns Namespace of the YANG module to get.
 * @param[in] revision Optional revision date of the YANG module to get. If not specified,
 * the schema in the newest revision is returned if any.
 * @return Pointer to the data model structure, NULL if no schema following the namespace and
 * revision requirements is present in the context.
 */
const struct lys_module *ly_ctx_get_module_by_ns(const struct ly_ctx *ctx, const char *ns, const char *revision);

/**
 * @brief Get submodule of a main module.
 *
 * If you already have the pointer to the submodule's main module, use ly_ctx_get_submodule2() instead.
 *
 * @param[in] ctx Context to work in.
 * @param[in] module Name of the main (belongs-to) module. If NULL, all module submodules are searched.
 * @param[in] revision Optional revision date of \p module. If NULL, all revisions of \p module
 * are searched. If set, \p module must also be set.
 * @param[in] submodule Name of the submodule to get.
 * @param[in] sub_revision Optional revision date of \p submodule. If NULL, the newest revision of \p submodule
 * is returned.
 * @return Pointer to the data model structure.
 */
const struct lys_submodule *ly_ctx_get_submodule(const struct ly_ctx *ctx, const char *module, const char *revision,
                                                 const char *submodule, const char *sub_revision);

/**
 * @brief Get submodule of a main module.
 *
 * If you have only the name (and optionally revision) of the submodule's main module, use ly_ctx_get_submodule()
 * instead.
 *
 * @param[in] main_module Main module (belongs to) of the searched submodule.
 * @param[in] submodule Name of the submodule to get.
 * @return Pointer to the data model structure.
 */
const struct lys_submodule *ly_ctx_get_submodule2(const struct lys_module *main_module, const char *submodule);

/**
 * @brief Get schema node according to the given schema node identifier in JSON format.
 *
 * If the \p nodeid is absolute, the first node identifier must be prefixed with
 * the module name. Then every other identifier either has an explicit module name or
 * the module name of the previous node is assumed. Examples:
 *
 * /ietf-netconf-monitoring:get-schema/input/identifier
 * /ietf-interfaces:interfaces/interface/ietf-ip:ipv4/address/ip
 *
 * If the \p nodeid is relative, \p start is mandatory and is the starting point
 * for the resolution. The first node identifier does not need a module name.
 *
 * Predicates on lists are accepted (ignored) in the form of "<key>(=<value>)"
 * and on leaves/leaf-lists ".(=<value>)".
 *
 * @param[in] ctx Context to work in.
 * @param[in] start Starting node for a relative schema node identifier, in which
 * case it is mandatory.
 * @param[in] nodeid JSON schema node identifier.
 * @return Resolved schema node or NULL.
 */
const struct lys_node *ly_ctx_get_node(struct ly_ctx *ctx, const struct lys_node *start, const char *nodeid);

/**
 * @brief Get schema node according to the given data node identifier in JSON format.
 *
 * The functionality is almost the same as ly_ctx_get_node(), but this function accepts
 * the data node identifier format (skipped choices, cases, inputs, and outputs). Examples:
 *
 * /ietf-netconf-monitoring:get-schema/identifier
 * /ietf-interfaces:interfaces/interface/ietf-ip:ipv4/address/ip
 *
 * Since input and output is skipped, there could arise ambiguities if one RPC input
 * contains a parameter with the same name as is in output, hence the flag.
 *
 * Predicates on lists are accepted (ignored) in the form of "<key>(=<value>)"
 * and on leaves/leaf-lists ".(=<value>)".
 *
 * @param[in] ctx Context to work in.
 * @param[in] start Starting node for a relative schema node identifier, in which
 * case it is mandatory.
 * @param[in] nodeid JSON schema node identifier.
 * @param[in] rpc_output Whether to search in RPC output parameters instead input ones.
 * @return Resolved schema node or NULL.
 */
const struct lys_node *ly_ctx_get_node2(struct ly_ctx *ctx, const struct lys_node *start, const char *nodeid, int rpc_output);

/**
 * @brief Free all internal structures of the specified context.
 *
 * The function should be used before terminating the application to destroy
 * and free all structures internally used by libyang. If the caller uses
 * multiple contexts, the function should be called for each used context.
 *
 * All instance data are supposed to be freed before destroying the context.
 * Data models are destroyed automatically as part of ly_ctx_destroy() call.
 *
 * @param[in] ctx libyang context to destroy
 * @param[in] private_destructor Optional destructor function for private objects assigned
 * to the nodes via lys_set_private(). If NULL, the private objects are not freed by libyang.
 */
void ly_ctx_destroy(struct ly_ctx *ctx, void (*private_destructor)(const struct lys_node *node, void *priv));

/**@} context */

/**
 * @defgroup nodeset Tree nodes set
 * @ingroup datatree
 * @ingroup schematree
 * @{
 *
 * Structure and functions to hold and manipulate with sets of nodes from schema or data trees.
 */

/**
 * @brief set array of ::ly_set
 * It is kept in union to keep ::ly_set generic for data as well as schema trees
 */
union ly_set_set {
    struct lys_node **s;         /**< array of pointers to a ::lys_node objects */
    struct lyd_node **d;         /**< array of pointers to a ::lyd_node objects */
    void **g;                    /**< dummy array for generic work */
};

/**
 * @brief Structure to hold a set of (not necessary somehow connected) ::lyd_node or ::lys_node objects.
 * Caller is supposed to not mix the type of objects added to the set and according to its knowledge about
 * the set content, it is supposed to access the set via the sset, dset or set members of the structure.
 *
 * To free the structure, use ly_set_free() function, to manipulate with the structure, use other
 * ly_set_* functions.
 */
struct ly_set {
    unsigned int size;               /**< allocated size of the set array */
    unsigned int number;             /**< number of elements in (used size of) the set array */
    union ly_set_set set;            /**< set array - union to keep ::ly_set generic for data as well as schema trees */
};

/**
 * @brief Create and initiate new ::ly_set structure.
 *
 * @return Created ::ly_set structure or NULL in case of error.
 */
struct ly_set *ly_set_new(void);

/**
 * @brief Add a ::lyd_node or ::lys_node object into the set
 *
 * Since it is a set, the function checks for duplicity and if the
 * node is already in the set, the index of the previously added
 * node is returned.
 *
 * @param[in] set Set where the \p node will be added.
 * @param[in] node The ::lyd_node or ::lys_node object to be added into the \p set;
 * @return -1 on failure, index of the \p node in the set on success
 */
int ly_set_add(struct ly_set *set, void *node);

/**
 * @brief Remove all objects from the set, but keep the set container for further use.
 *
 * @param[in] set Set to clean.
 * @return 0 on success
 */
int ly_set_clean(struct ly_set *set);

/**
 * @brief Remove a ::lyd_node or ::lys_node object from the set.
 *
 * Note that after removing a node from a set, indexes of other nodes in the set can change
 * (the last object is placed instead of the removed object).
 *
 * @param[in] set Set from which the \p node will be removed.
 * @param[in] node The ::lyd_node or ::lys_node object to be removed from the \p set;
 * @return 0 on success
 */
int ly_set_rm(struct ly_set *set, void *node);

/**
 * @brief Remove a ::lyd_node or ::lys_node object from the set index.
 *
 * Note that after removing a node from a set, indexes of other nodes in the set can change
 * (the last object is placed instead of the removed object).
 *
 * @param[in] set Set from which a node will be removed.
 * @param[in] index Index of the ::lyd_node or ::lys_node object in the \p set to be removed from the \p set;
 * @return 0 on success
 */
int ly_set_rm_index(struct ly_set *set, unsigned int index);

/**
 * @brief Free the ::ly_set data. Frees only the set structure content, not the referred data.
 *
 * @param[in] set The set to be freed.
 */
void ly_set_free(struct ly_set *set);

/**@} nodeset */

/**
 * @defgroup printerflags Printer flags
 * @ingroup datatree
 *
 * Validity flags for data nodes.
 *
 * @{
 */
#define LYP_WITHSIBLINGS 0x01 /**< Flag for printing also the (following) sibling nodes of the data node. */
#define LYP_FORMAT       0x02 /**< Flag for formatted output. */

/**
 * @}
 */

/**
 * @defgroup logger Logger
 * @{
 *
 * Publicly visible functions and values of the libyang logger. For more
 * information, see \ref howtologger.
 */

/**
 * @typedef LY_LOG_LEVEL
 * @brief Verbosity levels of the libyang logger.
 */
typedef enum {
    LY_LLERR,      /**< Print only error messages. */
    LY_LLWRN,      /**< Print error and warning messages. */
    LY_LLVRB,      /**< Besides errors and warnings, print some other verbose messages. */
    LY_LLDBG       /**< Print all messages including some development debug messages. */
} LY_LOG_LEVEL;

/**
 * @brief Set logger verbosity level.
 * @param[in] level Verbosity level.
 */
void ly_verb(LY_LOG_LEVEL level);

/**
 * @brief Set logger callback.
 *
 * !IMPORTANT! If an error has a specific error-app-tag defined in the model, it will NOT be set
 *             at the time of calling this callback. It will be set right after, so to retrieve it
 *             it must be checked afterwards with ly_errapptag().
 *
 * @param[in] clb Logging callback.
 * @param[in] path flag to resolve and provide path as the third parameter of the callback function. In case of
 *            validation and some other errors, it can be useful to get the path to the problematic element. Note,
 *            that according to the tree type and the specific situation, the path can slightly differs (keys
 *            presence) or it can be NULL, so consider it as an optional parameter. If the flag is 0, libyang will
 *            not bother with resolving the path.
 */
void ly_set_log_clb(void (*clb)(LY_LOG_LEVEL level, const char *msg, const char *path), int path);

/**
 * @brief Get logger callback.
 * @return Logger callback (can be NULL).
 */
void (*ly_get_log_clb(void))(LY_LOG_LEVEL, const char *, const char *);

/**
 * @typedef LY_ERR
 * @brief libyang's error codes available via ly_errno extern variable.
 * @ingroup logger
 */
typedef enum {
    LY_SUCCESS,    /**< no error, not set by functions, included just to complete #LY_ERR enumeration */
    LY_EMEM,       /**< Memory allocation failure */
    LY_ESYS,       /**< System call failure */
    LY_EINVAL,     /**< Invalid value */
    LY_EINT,       /**< Internal error */
    LY_EVALID      /**< Validation failure */
} LY_ERR;

/**
 * @typedef LY_VECODE
 * @brief libyang's codes of validation error. Whenever ly_errno is set to LY_EVALID, the ly_vecode is also set
 * to the appropriate LY_VECODE value.
 * @ingroup logger
 */
typedef enum {
    LYVE_SUCCESS = 0,  /**< no error */

    LYVE_XML_MISS,     /**< missing XML object */
    LYVE_XML_INVAL,    /**< invalid XML object */
    LYVE_XML_INCHAR,   /**< invalid XML character */

    LYVE_EOF,          /**< unexpected end of input data */
    LYVE_INSTMT,       /**< invalid statement (schema) */
    /* */
    LYVE_INID,         /**< invalid identifier (schema) */
    LYVE_INDATE,       /**< invalid date format */
    LYVE_INARG,        /**< invalid value of a statement argument (schema) */
    LYVE_MISSSTMT,     /**< missing required statement (schema) */
    /* */
    LYVE_MISSARG,      /**< missing required statement argument (schema) */
    LYVE_TOOMANY,      /**< too many instances of some object */
    LYVE_DUPID,        /**< duplicated identifier (schema) */
    LYVE_DUPLEAFLIST,  /**< multiple instances of leaf-list */
    LYVE_DUPLIST,      /**< multiple instances of list */
    LYVE_NOUNIQ,       /**< unique leaves match on 2 list instances (data) */
    LYVE_ENUM_DUPVAL,  /**< duplicated enum value (schema) */
    LYVE_ENUM_DUPNAME, /**< duplicated enum name (schema) */
    LYVE_ENUM_WS,      /**< enum name with leading/trailing whitespaces (schema) */
    LYVE_BITS_DUPVAL,  /**< duplicated bits value (schema) */
    LYVE_BITS_DUPNAME, /**< duplicated bits name (schema) */
    LYVE_INMOD,        /**< invalid module name */
    /* */
    LYVE_KEY_NLEAF,    /**< list key is not a leaf (schema) */
    LYVE_KEY_TYPE,     /**< invalid list key type (schema) */
    LYVE_KEY_CONFIG,   /**< key config value differs from the list config value */
    LYVE_KEY_MISS,     /**< list key not found (schema) */
    LYVE_KEY_DUP,      /**< duplicated key identifier (schema) */
    LYVE_INREGEX,      /**< invalid regular expression (schema) */
    LYVE_INRESOLV,     /**< no resolvents found (schema) */
    LYVE_INSTATUS,     /**< invalid derivation because of status (schema) */

    LYVE_OBSDATA,      /**< obsolete data instantiation (data) */
    /* */
    LYVE_NORESOLV,     /**< no resolvents found for an expression (data) */
    LYVE_INELEM,       /**< invalid element (data) */
    /* */
    LYVE_MISSELEM,     /**< missing required element (data) */
    LYVE_INVAL,        /**< invalid value of an element (data) */
    LYVE_INVALATTR,    /**< invalid attribute value (data) */
    LYVE_INATTR,       /**< invalid attribute in an element (data) */
    LYVE_MISSATTR,     /**< missing attribute in an element (data) */
    LYVE_NOCONSTR,     /**< value out of range/length/pattern (data) */
    LYVE_INCHAR,       /**< unexpected characters (data) */
    LYVE_INPRED,       /**< predicate resolution fail (data) */
    LYVE_MCASEDATA,    /**< data for more cases of a choice (data) */
    LYVE_NOMUST,       /**< unsatisfied must condition (data) */
    LYVE_NOWHEN,       /**< unsatisfied when condition (data) */
    LYVE_INORDER,      /**< invalid order of elements (data) */
    LYVE_INWHEN,       /**< irresolvable when condition (data) */
    LYVE_NOMIN,        /**< min-elements constraint not honored (data) */
    LYVE_NOMAX,        /**< max-elements constraint not honored (data) */
    LYVE_NOREQINS,     /**< required instance does not exits (data) */
    LYVE_NOLEAFREF,    /**< leaf pointed to by leafref does not exist (data) */
    LYVE_NOMANDCHOICE, /**< no mandatory choice case branch exists (data) */

    LYVE_XPATH_INTOK,  /**< unexpected XPath token */
    LYVE_XPATH_EOF,    /**< unexpected end of an XPath expression */
    LYVE_XPATH_INOP,   /**< invalid XPath operation operands */
    /* */
    LYVE_XPATH_INCTX,  /**< invalid XPath context type */
    LYVE_XPATH_INARGCOUNT, /**< invalid number of arguments for an XPath function */
    LYVE_XPATH_INARGTYPE, /**< invalid type of arguments for an XPath function */

    LYVE_PATH_INCHAR,  /**< invalid characters (path) */
    LYVE_PATH_INMOD,   /**< invalid module name (path) */
    LYVE_PATH_MISSMOD, /**< missing module name (path) */
    LYVE_PATH_INNODE,  /**< invalid node name (path) */
    LYVE_PATH_INKEY,   /**< invalid key name (path) */
    LYVE_PATH_MISSKEY, /**< missing some list keys (path) */
    LYVE_PATH_EXISTS,  /**< target node already exists (path) */
    LYVE_PATH_MISSPAR, /**< some parent of the target node is missing (path) */
} LY_VECODE;

/**
 * @cond INTERNAL
 * Get address of (thread-specific) `ly_errno' variable.
 */
LY_ERR *ly_errno_location(void);

LY_VECODE *ly_vecode_location(void);

/**
 * @endcond INTERNAL
 * @brief libyang specific (thread-safe) errno (see #LY_ERR for the list of possible values and their meaning).
 */
#define ly_errno (*ly_errno_location())

/**
 * @brief libyang's validation error code
 */
#define ly_vecode (*ly_vecode_location())

/**
 * @brief Get the last (thread-specific) error message. If the coresponding module defined
 * a specific error message, it will be used instead the default one.
 *
 * Sometimes, the error message is extended with path of the element where is the problem.
 * The path is available via ly_errpath().
 *
 * @return Text of the last error message, empty string if there is no error.
 */
const char *ly_errmsg(void);

/**
 * @brief Get the last (thread-specific) path of the element where was an error.
 *
 * The path always corresponds to the error message available via ly_errmsg(), so
 * whenever a subsequent error message is printed, the path is erased or rewritten.
 * The path reflects the type of the processed tree - data path for data tree functions
 * and schema path in case of schema tree functions. In case of processing YIN schema
 * or XML data, the path can be just XML path. In such a case, the corresponding
 * ly_vecode (value 1-3) is set.
 *
 * @return Path of the error element, empty string if error path does not apply to the last error.
 */
const char *ly_errpath(void);

/**
 * @brief Get the last (thread-specific) error-app-tag if there was a specific one defined
 * in the module for the last error.
 *
 * The app-tag always corresponds to the error message available via ly_errmsg(), so
 * whenever a subsequent error message is printed, the app-tag is erased or rewritten.
 *
 * @return Error-app-tag of the last error, empty string if the error-app-tag does not apply to the last error.
 */
const char *ly_errapptag(void);

/**@} logger */

#ifdef __cplusplus
}
#endif

#endif /* LY_LIBYANG_H_ */
