#
# Copyright (C) 2006-2011 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

FS_MENU:=Filesystems

define KernelPackage/fs-fscache
  SUBMENU:=$(FS_MENU)
  TITLE:=General filesystem local cache manager
  DEPENDS:=
  KCONFIG:=\
	CONFIG_FSCACHE=m \
	CONFIG_FSCACHE_STATS=y \
	CONFIG_FSCACHE_HISTOGRAM=n \
	CONFIG_FSCACHE_DEBUG=n \
	CONFIG_FSCACHE_OBJECT_LIST=n \
	CONFIG_CACHEFILES=y \
	CONFIG_CACHEFILES_DEBUG=n \
	CONFIG_CACHEFILES_HISTOGRAM=n
  FILES:=$(LINUX_DIR)/fs/fscache/fscache.ko
  AUTOLOAD:=$(call AutoLoad,29,fscache)
endef

$(eval $(call KernelPackage,fs-fscache))

define KernelPackage/fs-afs
  SUBMENU:=$(FS_MENU)
  TITLE:=Andrew FileSystem client
  DEPENDS:=+kmod-rxrpc +kmod-dnsresolver +kmod-fs-fscache
  KCONFIG:=\
	CONFIG_AFS_FS=m \
	CONFIG_AFS_DEBUG=n \
	CONFIG_AFS_FSCACHE=y
  FILES:=$(LINUX_DIR)/fs/afs/kafs.ko
  AUTOLOAD:=$(call AutoLoad,30,kafs)
endef

define KernelPackage/fs-afs/description
  Kernel module for Andrew FileSystem client support
endef

$(eval $(call KernelPackage,fs-afs))

define KernelPackage/fs-autofs4
  SUBMENU:=$(FS_MENU)
  TITLE:=AUTOFS4 filesystem support
  KCONFIG:=CONFIG_AUTOFS4_FS
  FILES:=$(LINUX_DIR)/fs/autofs4/autofs4.ko
  AUTOLOAD:=$(call AutoLoad,30,autofs4)
endef

define KernelPackage/fs-autofs4/description
 Kernel module for AutoFS4 support
endef

$(eval $(call KernelPackage,fs-autofs4))


define KernelPackage/fs-btrfs
  SUBMENU:=$(FS_MENU)
  TITLE:=BTRFS filesystem support
  DEPENDS:=+kmod-lib-crc32c +kmod-lib-lzo +kmod-lib-zlib +(!LINUX_3_3&&!LINUX_3_6&&!LINUX_3_8):kmod-lib-raid6 +(!LINUX_3_3&&!LINUX_3_6&&!LINUX_3_8):kmod-lib-xor
  KCONFIG:=\
	CONFIG_BTRFS_FS \
	CONFIG_BTRFS_FS_POSIX_ACL=n \
	CONFIG_BTRFS_FS_CHECK_INTEGRITY=n
  FILES:=\
	$(LINUX_DIR)/fs/btrfs/btrfs.ko
  AUTOLOAD:=$(call AutoLoad,30,btrfs,1)
endef

define KernelPackage/fs-btrfs/description
 Kernel module for BTRFS support
endef

$(eval $(call KernelPackage,fs-btrfs))


define KernelPackage/fs-cifs
  SUBMENU:=$(FS_MENU)
  TITLE:=CIFS support
  KCONFIG:= \
	CONFIG_CIFS \
	CONFIG_CIFS_DFS_UPCALL=n \
	CONFIG_CIFS_UPCALL=n
  FILES:=$(LINUX_DIR)/fs/cifs/cifs.ko
  AUTOLOAD:=$(call AutoLoad,30,cifs)
  $(call AddDepends/nls)
  DEPENDS+= \
    +kmod-crypto-arc4 \
    +kmod-crypto-hmac \
    +kmod-crypto-cmac \
    +kmod-crypto-md5 \
    +kmod-crypto-md4 \
    +kmod-crypto-des \
    +kmod-crypto-ecb \
    +!LINUX_3_3&&!LINUX_3_6:kmod-crypto-sha256
endef

define KernelPackage/fs-cifs/description
 Kernel module for CIFS support
endef

$(eval $(call KernelPackage,fs-cifs))


define KernelPackage/fs-configfs
  SUBMENU:=$(FS_MENU)
  TITLE:=Configuration filesystem support
  KCONFIG:= \
	CONFIG_CONFIGFS_FS
  FILES:=$(LINUX_DIR)/fs/configfs/configfs.ko
  AUTOLOAD:=$(call AutoLoad,30,configfs)
endef

define KernelPackage/fs-configfs/description
 Kernel module for configfs support
endef

$(eval $(call KernelPackage,fs-configfs))

define KernelPackage/fs-cramfs
  SUBMENU:=$(FS_MENU)
  TITLE:=Compressed RAM/ROM filesystem support
  DEPENDS:=+kmod-lib-zlib
  KCONFIG:= \
	CONFIG_CRAMFS
  FILES:=$(LINUX_DIR)/fs/cramfs/cramfs.ko
  AUTOLOAD:=$(call AutoLoad,30,cramfs)
endef

define KernelPackage/fs-cramfs/description
 Kernel module for cramfs support
endef

$(eval $(call KernelPackage,fs-cramfs))

define KernelPackage/fs-exportfs
  SUBMENU:=$(FS_MENU)
  TITLE:=exportfs kernel server support
  KCONFIG:=CONFIG_EXPORTFS
  FILES=$(LINUX_DIR)/fs/exportfs/exportfs.ko
  AUTOLOAD:=$(call AutoLoad,20,exportfs,1)
endef

define KernelPackage/fs-exportfs/description
 Kernel module for exportfs. Needed for some other modules.
endef

$(eval $(call KernelPackage,fs-exportfs))


define KernelPackage/fs-ext4
  SUBMENU:=$(FS_MENU)
  TITLE:=EXT4 filesystem support
  KCONFIG:= \
	CONFIG_EXT4_FS \
	CONFIG_JBD2
  FILES:= \
	$(LINUX_DIR)/fs/ext4/ext4.ko \
	$(LINUX_DIR)/fs/jbd2/jbd2.ko \
	$(LINUX_DIR)/fs/mbcache.ko
  AUTOLOAD:=$(call AutoLoad,30,mbcache jbd2 ext4,1)
  $(call AddDepends/crc16, +kmod-lib-crc32c +!LINUX_3_3:kmod-crypto-hash)
endef

define KernelPackage/fs-ext4/description
 Kernel module for EXT4 filesystem support
endef

$(eval $(call KernelPackage,fs-ext4))


define KernelPackage/fuse
  SUBMENU:=$(FS_MENU)
  TITLE:=FUSE (Filesystem in Userspace) support
  KCONFIG:= CONFIG_FUSE_FS
  FILES:=$(LINUX_DIR)/fs/fuse/fuse.ko
  AUTOLOAD:=$(call AutoLoad,80,fuse)
endef

define KernelPackage/fuse/description
 Kernel module for userspace filesystem support
endef

$(eval $(call KernelPackage,fuse))


define KernelPackage/fs-hfs
  SUBMENU:=$(FS_MENU)
  TITLE:=HFS filesystem support
  KCONFIG:=CONFIG_HFS_FS
  FILES:=$(LINUX_DIR)/fs/hfs/hfs.ko
  AUTOLOAD:=$(call AutoLoad,30,hfs)
  $(call AddDepends/nls)
endef

define KernelPackage/fs-hfs/description
 Kernel module for HFS filesystem support
endef

$(eval $(call KernelPackage,fs-hfs))


define KernelPackage/fs-hfsplus
  SUBMENU:=$(FS_MENU)
  TITLE:=HFS+ filesystem support
  KCONFIG:=CONFIG_HFSPLUS_FS
  FILES:=$(LINUX_DIR)/fs/hfsplus/hfsplus.ko
  AUTOLOAD:=$(call AutoLoad,30,hfsplus)
  $(call AddDepends/nls,utf8)
endef

define KernelPackage/fs-hfsplus/description
 Kernel module for HFS+ filesystem support
endef

$(eval $(call KernelPackage,fs-hfsplus))


define KernelPackage/fs-isofs
  SUBMENU:=$(FS_MENU)
  TITLE:=ISO9660 filesystem support
  DEPENDS:=+kmod-lib-zlib
  KCONFIG:=CONFIG_ISO9660_FS CONFIG_JOLIET=y CONFIG_ZISOFS=n
  FILES:=$(LINUX_DIR)/fs/isofs/isofs.ko
  AUTOLOAD:=$(call AutoLoad,30,isofs)
  $(call AddDepends/nls)
endef

define KernelPackage/fs-isofs/description
 Kernel module for ISO9660 filesystem support
endef

$(eval $(call KernelPackage,fs-isofs))


define KernelPackage/fs-minix
  SUBMENU:=$(FS_MENU)
  TITLE:=Minix filesystem support
  KCONFIG:=CONFIG_MINIX_FS
  FILES:=$(LINUX_DIR)/fs/minix/minix.ko
  AUTOLOAD:=$(call AutoLoad,30,minix)
endef

define KernelPackage/fs-minix/description
 Kernel module for Minix filesystem support
endef

$(eval $(call KernelPackage,fs-minix))


define KernelPackage/fs-msdos
  SUBMENU:=$(FS_MENU)
  TITLE:=MSDOS filesystem support
  DEPENDS:=+kmod-fs-vfat
  KCONFIG:=CONFIG_MSDOS_FS
  FILES:=$(LINUX_DIR)/fs/fat/msdos.ko
  AUTOLOAD:=$(call AutoLoad,40,msdos)
  $(call AddDepends/nls)
endef

define KernelPackage/fs-msdos/description
 Kernel module for MSDOS filesystem support
endef

$(eval $(call KernelPackage,fs-msdos))


define KernelPackage/fs-nfs
  SUBMENU:=$(FS_MENU)
  TITLE:=NFS filesystem support
  DEPENDS:=+kmod-fs-nfs-common +kmod-dnsresolver
  KCONFIG:= \
	CONFIG_NFS_FS \
	CONFIG_NFS_USE_LEGACY_DNS=n \
	CONFIG_NFS_USE_NEW_IDMAPPER=n
ifeq ($(strip $(call CompareKernelPatchVer,$(KERNEL_PATCHVER),ge,3.6.0)),1)
  FILES:= \
	$(LINUX_DIR)/fs/nfs/nfs.ko \
	$(LINUX_DIR)/fs/nfs/nfsv3.ko
else
  FILES:= \
	$(LINUX_DIR)/fs/nfs/nfs.ko
endif
  AUTOLOAD:=$(call AutoLoad,40,nfs nfsv3)
endef

define KernelPackage/fs-nfs/description
 Kernel module for NFS support
endef

define KernelPackage/fs-nfs/config
  if PACKAGE_kmod-fs-nfs
       config KERNEL_NFS_V4
               bool "Support NFSv4 in NFS client"
               depends on PACKAGE_kmod-fs-sunrpc-auth-rpcgss
               default y
               help
                 Select this option to support NFSv4 in the NFS server
  endif
endef

$(eval $(call KernelPackage,fs-nfs))


define KernelPackage/fs-nfs-common
  SUBMENU:=$(FS_MENU)
  TITLE:=Common NFS filesystem modules
  DEPENDS:=+kmod-lib-oid-registry
  KCONFIG:= \
	CONFIG_LOCKD \
	CONFIG_SUNRPC
  FILES:= \
	$(LINUX_DIR)/fs/lockd/lockd.ko \
	$(LINUX_DIR)/net/sunrpc/sunrpc.ko
  AUTOLOAD:=$(call AutoLoad,30,sunrpc lockd)
endef

$(eval $(call KernelPackage,fs-nfs-common))


define KernelPackage/fs-sunrpc-auth-rpcgss
  SUBMENU:=$(FS_MENU)
  TITLE:=GSS authentication for SUN RPC
  DEPENDS:=+kmod-fs-nfs-common
  KCONFIG:=CONFIG_SUNRPC_GSS
  FILES:= \
       $(LINUX_DIR)/net/sunrpc/auth_gss/auth_rpcgss.ko
  AUTOLOAD:=$(call AutoLoad,30,auth_rpcgss)
endef

$(eval $(call KernelPackage,fs-sunrpc-auth-rpcgss))

define KernelPackage/fs-nfsd
  SUBMENU:=$(FS_MENU)
  TITLE:=NFS kernel server support
  DEPENDS:=+kmod-fs-nfs-common +kmod-fs-exportfs +kmod-fs-sunrpc-auth-rpcgss
  KCONFIG= \
	CONFIG_NFSD \
	CONFIG_NFSD_FAULT_INJECTION=n
  FILES:=$(LINUX_DIR)/fs/nfsd/nfsd.ko
  AUTOLOAD:=$(call AutoLoad,40,nfsd)
endef

define KernelPackage/fs-nfsd/config
  if PACKAGE_kmod-fs-nfsd
       config KERNEL_NFSD_V4
               bool "Support NFSv4 in NFS server"
               depends on PACKAGE_kmod-fs-sunrpc-auth-rpcgss
               default y
               help
                 Select this option to support NFSv4 in the NFS server
  endif
endef

define KernelPackage/fs-nfsd/description
 Kernel module for NFS kernel server support
endef

$(eval $(call KernelPackage,fs-nfsd))


define KernelPackage/fs-ntfs
  SUBMENU:=$(FS_MENU)
  TITLE:=NTFS filesystem support
  KCONFIG:=CONFIG_NTFS_FS \
		CONFIG_NTFS_RW=n
  FILES:=$(LINUX_DIR)/fs/ntfs/ntfs.ko
  AUTOLOAD:=$(call AutoLoad,30,ntfs)
  $(call AddDepends/nls)
endef

define KernelPackage/fs-ntfs/description
 Kernel module for NTFS filesystem support
endef

$(eval $(call KernelPackage,fs-ntfs))


define KernelPackage/fs-reiserfs
  SUBMENU:=$(FS_MENU)
  TITLE:=ReiserFS filesystem support
  KCONFIG:=CONFIG_REISERFS_FS
  FILES:=$(LINUX_DIR)/fs/reiserfs/reiserfs.ko
  AUTOLOAD:=$(call AutoLoad,30,reiserfs,1)
endef

define KernelPackage/fs-reiserfs/description
 Kernel module for ReiserFS support
endef

$(eval $(call KernelPackage,fs-reiserfs))


define KernelPackage/fs-udf
  SUBMENU:=$(FS_MENU)
  TITLE:=UDF filesystem support
  KCONFIG:=CONFIG_UDF_FS
  FILES:=$(LINUX_DIR)/fs/udf/udf.ko
  AUTOLOAD:=$(call AutoLoad,30,udf)
  DEPENDS:=+kmod-lib-crc-itu-t
  $(call AddDepends/nls)
endef

define KernelPackage/fs-udf/description
 Kernel module for UDF filesystem support
endef

$(eval $(call KernelPackage,fs-udf))


define KernelPackage/fs-vfat
  SUBMENU:=$(FS_MENU)
  TITLE:=VFAT filesystem support
  KCONFIG:= \
	CONFIG_FAT_FS \
	CONFIG_VFAT_FS \
	CONFIG_FAT_DEFAULT_IOCHARSET="utf8" \
	CONFIG_FAT_DEFAULT_CODEPAGE=936
  FILES:= \
	$(LINUX_DIR)/fs/fat/fat.ko \
	$(LINUX_DIR)/fs/fat/vfat.ko
  AUTOLOAD:=$(call AutoLoad,30,fat vfat)
  $(call AddDepends/nls,utf8)
  $(call AddDepends/nls,cp936)
endef

define KernelPackage/fs-vfat/description
 Kernel module for VFAT filesystem support
endef

$(eval $(call KernelPackage,fs-vfat))


define KernelPackage/fs-xfs
  SUBMENU:=$(FS_MENU)
  TITLE:=XFS filesystem support
  KCONFIG:=CONFIG_XFS_FS
  DEPENDS:= +kmod-fs-exportfs +kmod-lib-crc32c @!avr32
  FILES:=$(LINUX_DIR)/fs/xfs/xfs.ko
  AUTOLOAD:=$(call AutoLoad,30,xfs,1)
endef

define KernelPackage/fs-xfs/description
 Kernel module for XFS support
endef

$(eval $(call KernelPackage,fs-xfs))


define KernelPackage/fs-jfs
  SUBMENU:=$(FS_MENU)
  TITLE:=JFS filesystem support
  KCONFIG:=CONFIG_JFS_FS
  FILES:=$(LINUX_DIR)/fs/jfs/jfs.ko
  AUTOLOAD:=$(call AutoLoad,30,jfs,1)
  $(call AddDepends/nls)
endef

define KernelPackage/fs-jfs/description
 Kernel module for JFS support
endef

$(eval $(call KernelPackage,fs-jfs))
