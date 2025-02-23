// -*- C++ -*- Exception handling and frame unwind runtime interface routines.
// Copyright (C) 2001-2015 Free Software Foundation, Inc.
//
// This file is part of GCC.
//
// GCC is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2, or (at your option)
// any later version.
//
// GCC is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.
//
// You should have received a copy of the GNU General Public License
// along with GCC; see the file COPYING.  If not, write to
// the Free Software Foundation, 59 Temple Place - Suite 330,
// Boston, MA 02111-1307, USA.

// As a special exception, you may use this file as part of a free software
// library without restriction.  Specifically, if other files instantiate
// templates or use macros or inline functions from this file, or you compile
// this file and link it with other files to produce an executable, this
// file does not by itself cause the resulting executable to be covered by
// the GNU General Public License.  This exception does not however
// invalidate any other reasons why the executable file might be covered by
// the GNU General Public License.

// This is derived from the C++ ABI for IA-64.  Where we diverge
// for cross-architecture compatibility are noted with "@@@".

#ifndef _UNWIND_CXX_H
#define _UNWIND_CXX_H 1

// Level 2: C++ ABI

#include <typeinfo>
#include <exception>
#include <cstddef>
#include "unwind.h"

// Original unwind-cxx.h also includes bits/atomic_word.h which is CPU-specific, 
// but always defines _Atomic_word as typedef int .
// Only thing that differs is memory-barrier macroses.
typedef int _Atomic_word;


#pragma GCC visibility push(default)

namespace __cxxabiv1
{

// A primary C++ exception object consists of a header, which is a wrapper
// around an unwind object header with additional C++ specific information,
// followed by the exception object itself.

struct __cxa_exception
{ 
  // Manage the exception object itself.
  std::type_info *exceptionType;
  void (*exceptionDestructor)(void *); 

  // The C++ standard has entertaining rules wrt calling set_terminate
  // and set_unexpected in the middle of the exception cleanup process.
  std::unexpected_handler unexpectedHandler;
  std::terminate_handler terminateHandler;

  // The caught exception stack threads through here.
  __cxa_exception *nextException;

  // How many nested handlers have caught this exception.  A negated
  // value is a signal that this object has been rethrown.
  int handlerCount;

  // Cache parsed handler data from the personality routine Phase 1
  // for Phase 2 and __cxa_call_unexpected.
  int handlerSwitchValue;
  const unsigned char *actionRecord;
  const unsigned char *languageSpecificData;
  _Unwind_Ptr catchTemp;
  void *adjustedPtr;

  // The generic exception header.  Must be last.
  _Unwind_Exception unwindHeader;
};

struct __cxa_refcounted_exception
{
  // Manage this header.
  _Atomic_word referenceCount;
  // __cxa_exception must be last, and no padding can be after it.
  __cxa_exception exc;
};

// A dependent C++ exception object consists of a header, which is a wrapper
// around an unwind object header with additional C++ specific information,
// followed by the exception object itself.
struct __cxa_dependent_exception
{
  // The primary exception
  void *primaryException;

  // The C++ standard has entertaining rules wrt calling set_terminate
  // and set_unexpected in the middle of the exception cleanup process.
  std::unexpected_handler unexpectedHandler;
  std::terminate_handler terminateHandler;

  // The caught exception stack threads through here.
  __cxa_exception *nextException;

  // How many nested handlers have caught this exception.  A negated
  // value is a signal that this object has been rethrown.
  int handlerCount;

  // Cache parsed handler data from the personality routine Phase 1
  // for Phase 2 and __cxa_call_unexpected.
  int handlerSwitchValue;
  const unsigned char *actionRecord;
  const unsigned char *languageSpecificData;
  _Unwind_Ptr catchTemp;
  void *adjustedPtr;

  // The generic exception header.  Must be last.
  _Unwind_Exception unwindHeader;
};


// Each thread in a C++ program has access to a __cxa_eh_globals object.
struct __cxa_eh_globals
{
  __cxa_exception *caughtExceptions;
  unsigned int uncaughtExceptions;
};


// The __cxa_eh_globals for the current thread can be obtained by using
// either of the following functions.  The "fast" version assumes at least
// one prior call of __cxa_get_globals has been made from the current
// thread, so no initialization is necessary.
extern "C" __cxa_eh_globals *__cxa_get_globals () throw();
extern "C" __cxa_eh_globals *__cxa_get_globals_fast () throw();

// Allocate memory for the primary exception plus the thrown object.
extern "C" void *__cxa_allocate_exception(std::size_t thrown_size) throw();
// Allocate memory for dependent exception.
extern "C" __cxa_dependent_exception *__cxa_allocate_dependent_exception() throw();

// Free the space allocated for the primary exception.
extern "C" void __cxa_free_exception(void *thrown_exception) throw();
// Free the space allocated for the dependent exception.
extern "C" void __cxa_free_dependent_exception(__cxa_dependent_exception *dependent_exception) throw();

// Throw the exception.
extern "C" void __cxa_throw (void *thrown_exception,
			     std::type_info *tinfo,
			     void (*dest) (void *))
     __attribute__((noreturn));

// Used to implement exception handlers.
extern "C" void *__cxa_begin_catch (void *) throw();
extern "C" void __cxa_end_catch ();
extern "C" void __cxa_rethrow () __attribute__((noreturn));

// These facilitate code generation for recurring situations.
extern "C" void __cxa_bad_cast ();
extern "C" void __cxa_bad_typeid ();

// @@@ These are not directly specified by the IA-64 C++ ABI.

// Handles re-checking the exception specification if unexpectedHandler
// throws, and if bad_exception needs to be thrown.  Called from the
// compiler.
extern "C" void __cxa_call_unexpected (void *) __attribute__((noreturn));

// Invokes given handler, dying appropriately if the user handler was
// so inconsiderate as to return.
extern void __terminate(std::terminate_handler) __attribute__((noreturn));
extern void __unexpected(std::unexpected_handler) __attribute__((noreturn));

// The current installed user handlers.
extern std::terminate_handler __terminate_handler;
extern std::unexpected_handler __unexpected_handler;

// These are explicitly GNU C++ specific.

// This is the exception class we report -- "GNUCC++\0".
const _Unwind_Exception_Class __gxx_exception_class
#ifndef __ARM_EABI_UNWINDER__
= ((((((((_Unwind_Exception_Class) 'G' 
	 << 8 | (_Unwind_Exception_Class) 'N')
	<< 8 | (_Unwind_Exception_Class) 'U')
       << 8 | (_Unwind_Exception_Class) 'C')
      << 8 | (_Unwind_Exception_Class) 'C')
     << 8 | (_Unwind_Exception_Class) '+')
    << 8 | (_Unwind_Exception_Class) '+')
   << 8 | (_Unwind_Exception_Class) '\0');
#else
= "GNUC++";
#endif

// GNU C++ personality routine, Version 0.
extern "C" _Unwind_Reason_Code __gxx_personality_v0
     (int, _Unwind_Action, _Unwind_Exception_Class,
      struct _Unwind_Exception *, struct _Unwind_Context *);

// GNU C++ sjlj personality routine, Version 0.
extern "C" _Unwind_Reason_Code __gxx_personality_sj0
     (int, _Unwind_Action, _Unwind_Exception_Class,
      struct _Unwind_Exception *, struct _Unwind_Context *);

// Acquire the C++ exception header from the C++ object.
static inline __cxa_exception *
__get_exception_header_from_obj (void *ptr)
{
  return reinterpret_cast<__cxa_exception *>(ptr) - 1;
}

// Acquire the C++ exception header from the generic exception header.
static inline __cxa_exception *
__get_exception_header_from_ue (_Unwind_Exception *exc)
{
  return reinterpret_cast<__cxa_exception *>(exc + 1) - 1;
}

// Acquire the C++ refcounted exception header from the C++ object.
static inline __cxa_refcounted_exception *
__get_refcounted_exception_header_from_obj (void *ptr)
{
  return reinterpret_cast<__cxa_refcounted_exception *>(ptr) - 1;
}

// Acquire the C++ refcounted exception header from the generic exception
// header.
static inline __cxa_refcounted_exception *
__get_refcounted_exception_header_from_ue (_Unwind_Exception *exc)
{
  return reinterpret_cast<__cxa_refcounted_exception *>(exc + 1) - 1;
}

} /* namespace __cxxabiv1 */

#pragma GCC visibility pop

#endif // _UNWIND_CXX_H
