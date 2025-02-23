#
# Copyright (C) 2006-2012 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

BLOCK_MENU:=Block Devices

define KernelPackage/aoe
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=ATA over Ethernet support
  KCONFIG:=CONFIG_ATA_OVER_ETH
  FILES:=$(LINUX_DIR)/drivers/block/aoe/aoe.ko
  AUTOLOAD:=$(call AutoLoad,30,aoe)
endef

define KernelPackage/aoe/description
 Kernel support for ATA over Ethernet
endef

$(eval $(call KernelPackage,aoe))


define KernelPackage/ata-core
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Serial and Parallel ATA support
  DEPENDS:=@PCI_SUPPORT +kmod-scsi-core
  KCONFIG:=CONFIG_ATA
  FILES:=$(LINUX_DIR)/drivers/ata/libata.ko
endef

$(eval $(call KernelPackage,ata-core))


define AddDepends/ata
  SUBMENU:=$(BLOCK_MENU)
  DEPENDS+=kmod-ata-core $(1)
endef


define KernelPackage/ata-ahci
  TITLE:=AHCI Serial ATA support
  KCONFIG:=CONFIG_SATA_AHCI
  FILES:= \
    $(LINUX_DIR)/drivers/ata/ahci.ko \
    $(LINUX_DIR)/drivers/ata/libahci.ko
  AUTOLOAD:=$(call AutoLoad,41,libahci ahci,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-ahci/description
 Support for AHCI Serial ATA controllers
endef

$(eval $(call KernelPackage,ata-ahci))


define KernelPackage/ata-ahci-platform
  TITLE:=AHCI Serial ATA Platform support
  KCONFIG:=CONFIG_SATA_AHCI_PLATFORM
  FILES:= \
    $(LINUX_DIR)/drivers/ata/ahci_platform.ko \
    $(LINUX_DIR)/drivers/ata/libahci_platform.ko
  AUTOLOAD:=$(call AutoLoad,40,libahci_platform ahci_platform,1)
  $(call AddDepends/ata,@TARGET_qualcomm||TARGET_ipq||TARGET_mvebu +kmod-ata-ahci)
endef

define KernelPackage/ata-ahci-platform/description
 Platform support for AHCI Serial ATA controllers
endef

$(eval $(call KernelPackage,ata-ahci-platform))


define KernelPackage/ata-artop
  TITLE:=ARTOP 6210/6260 PATA support
  KCONFIG:=CONFIG_PATA_ARTOP
  FILES:=$(LINUX_DIR)/drivers/ata/pata_artop.ko
  AUTOLOAD:=$(call AutoLoad,41,pata_artop,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-artop/description
 PATA support for ARTOP 6210/6260 host controllers
endef

$(eval $(call KernelPackage,ata-artop))


define KernelPackage/ata-imx
  TITLE:=Freescale i.MX AHCI SATA support
  DEPENDS:=@TARGET_imx6
  KCONFIG:=\
	CONFIG_AHCI_IMX \
	CONFIG_SATA_AHCI_PLATFORM \
	CONFIG_PATA_IMX=n
  FILES:=$(LINUX_DIR)/drivers/ata/ahci_imx.ko
  AUTOLOAD:=$(call AutoLoad,41,ahci_imx,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-imx/description
 SATA support for the Freescale i.MX6 SoC's onboard AHCI SATA
endef

$(eval $(call KernelPackage,ata-imx))

define KernelPackage/ata-marvell-sata
  TITLE:=Marvell Serial ATA support
  KCONFIG:=CONFIG_SATA_MV
  FILES:=$(LINUX_DIR)/drivers/ata/sata_mv.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_mv,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-marvell-sata/description
 SATA support for marvell chipsets
endef

$(eval $(call KernelPackage,ata-marvell-sata))


define KernelPackage/ata-mvebu-ahci
  TITLE:=Marvell EBU AHCI support
  DEPENDS:=@TARGET_mvebu +kmod-ata-ahci-platform
  KCONFIG:=CONFIG_AHCI_MVEBU
  FILES:=$(LINUX_DIR)/drivers/ata/ahci_mvebu.ko
  AUTOLOAD:=$(call AutoLoad,41,ahci_mvebu,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-mvebu-ahci/description
 AHCI support for Marvell EBU SoCs
endef

$(eval $(call KernelPackage,ata-mvebu-ahci))


define KernelPackage/ata-nvidia-sata
  TITLE:=Nvidia Serial ATA support
  KCONFIG:=CONFIG_SATA_NV
  FILES:=$(LINUX_DIR)/drivers/ata/sata_nv.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_nv,1)
  $(call AddDepends/ata)
endef

$(eval $(call KernelPackage,ata-nvidia-sata))


define KernelPackage/ata-oxnas-sata
  TITLE:=oxnas Serial ATA support
  KCONFIG:=CONFIG_SATA_OXNAS
  DEPENDS:=@TARGET_oxnas
  FILES:=$(LINUX_DIR)/drivers/ata/sata_oxnas.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_oxnas,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-oxnas-sata/description
 SATA support for OX934 core found in the OX82x/PLX782x SoCs
endef

$(eval $(call KernelPackage,ata-oxnas-sata))


define KernelPackage/ata-pdc202xx-old
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Older Promise PATA controller support
  DEPENDS:=kmod-ata-core
  KCONFIG:= \
       CONFIG_ATA_SFF=y \
       CONFIG_PATA_PDC_OLD
  FILES:=$(LINUX_DIR)/drivers/ata/pata_pdc202xx_old.ko
  AUTOLOAD:=$(call AutoLoad,41,pata_pdc202xx_old,1)
endef

define KernelPackage/ata-pdc202xx-old/description
 This option enables support for the Promise 20246, 20262, 20263,
 20265 and 20267 adapters
endef

$(eval $(call KernelPackage,ata-pdc202xx-old))


define KernelPackage/ata-piix
  TITLE:=Intel PIIX PATA/SATA support
  KCONFIG:=CONFIG_ATA_PIIX
  FILES:=$(LINUX_DIR)/drivers/ata/ata_piix.ko
  AUTOLOAD:=$(call AutoLoad,41,ata_piix,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-piix/description
 SATA support for Intel ICH5/6/7/8 series host controllers and
 PATA support for Intel ESB/ICH/PIIX3/PIIX4 series host controllers
endef

$(eval $(call KernelPackage,ata-piix))


define KernelPackage/ata-sil
  TITLE:=Silicon Image SATA support
  KCONFIG:=CONFIG_SATA_SIL
  FILES:=$(LINUX_DIR)/drivers/ata/sata_sil.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_sil,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-sil/description
 Support for Silicon Image Serial ATA controllers
endef

$(eval $(call KernelPackage,ata-sil))


define KernelPackage/ata-sil24
  TITLE:=Silicon Image 3124/3132 SATA support
  KCONFIG:=CONFIG_SATA_SIL24
  FILES:=$(LINUX_DIR)/drivers/ata/sata_sil24.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_sil24,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-sil24/description
 Support for Silicon Image 3124/3132 Serial ATA controllers
endef

$(eval $(call KernelPackage,ata-sil24))


define KernelPackage/ata-via-sata
  TITLE:=VIA SATA support
  KCONFIG:=CONFIG_SATA_VIA
  FILES:=$(LINUX_DIR)/drivers/ata/sata_via.ko
  AUTOLOAD:=$(call AutoLoad,41,sata_via,1)
  $(call AddDepends/ata)
endef

define KernelPackage/ata-via-sata/description
 This option enables support for VIA Serial ATA
endef

$(eval $(call KernelPackage,ata-via-sata))


define KernelPackage/block2mtd
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Block device MTD emulation
  KCONFIG:=CONFIG_MTD_BLOCK2MTD
  FILES:=$(LINUX_DIR)/drivers/mtd/devices/block2mtd.ko
  AUTOLOAD:=$(call AutoLoad,30,block2mtd)
endef

$(eval $(call KernelPackage,block2mtd))


define KernelPackage/dm
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Device Mapper
  DEPENDS:=+kmod-crypto-manager
  # All the "=n" are unnecessary, they're only there
  # to stop the config from asking the question.
  # MIRROR is M because I've needed it for pvmove.
  KCONFIG:= \
	CONFIG_BLK_DEV_MD=n \
	CONFIG_DM_DEBUG=n \
	CONFIG_DM_UEVENT=n \
	CONFIG_DM_DELAY=n \
	CONFIG_DM_MULTIPATH=n \
	CONFIG_DM_ZERO=n \
	CONFIG_DM_SNAPSHOT=n \
	CONFIG_DM_LOG_USERSPACE=n \
	CONFIG_MD=y \
	CONFIG_BLK_DEV_DM \
	CONFIG_DM_CRYPT \
	CONFIG_DM_MIRROR
  FILES:=$(LINUX_DIR)/drivers/md/dm-*.ko
  AUTOLOAD:=$(call AutoLoad,30,dm-mod dm-log dm-region-hash dm-mirror dm-crypt)
endef

define KernelPackage/dm/description
 Kernel module necessary for LVM2 support
endef

$(eval $(call KernelPackage,dm))


define KernelPackage/md-mod
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=MD RAID
  KCONFIG:= \
       CONFIG_MD=y \
       CONFIG_BLK_DEV_MD=m \
       CONFIG_MD_AUTODETECT=y \
       CONFIG_MD_FAULTY=n
  FILES:=$(LINUX_DIR)/drivers/md/md-mod.ko
  AUTOLOAD:=$(call AutoLoad,27,md-mod)
endef

define KernelPackage/md-mod/description
 Kernel RAID md module (md-mod.ko).
 You will need to select at least one RAID level module below.
endef

$(eval $(call KernelPackage,md-mod))


define KernelPackage/md/Depends
  SUBMENU:=$(BLOCK_MENU)
  DEPENDS:=kmod-md-mod $(1)
endef


define KernelPackage/md-linear
$(call KernelPackage/md/Depends,)
  TITLE:=RAID Linear Module
  KCONFIG:=CONFIG_MD_LINEAR
  FILES:=$(LINUX_DIR)/drivers/md/linear.ko
  AUTOLOAD:=$(call AutoLoad,28,linear)
endef

define KernelPackage/md-linear/description
 RAID "Linear" or "Append" driver module (linear.ko)
endef

$(eval $(call KernelPackage,md-linear))


define KernelPackage/md-raid0
$(call KernelPackage/md/Depends,)
  TITLE:=RAID0 Module
  KCONFIG:=CONFIG_MD_RAID0
  FILES:=$(LINUX_DIR)/drivers/md/raid0.ko
  AUTOLOAD:=$(call AutoLoad,28,raid0)
endef

define KernelPackage/md-raid0/description
 RAID Level 0 (Striping) driver module (raid0.ko)
endef

$(eval $(call KernelPackage,md-raid0))


define KernelPackage/md-raid1
$(call KernelPackage/md/Depends,)
  TITLE:=RAID1 Module
  KCONFIG:=CONFIG_MD_RAID1
  FILES:=$(LINUX_DIR)/drivers/md/raid1.ko
  AUTOLOAD:=$(call AutoLoad,28,raid1)
endef

define KernelPackage/md-raid1/description
 RAID Level 1 (Mirroring) driver (raid1.ko)
endef

$(eval $(call KernelPackage,md-raid1))


define KernelPackage/md-raid10
$(call KernelPackage/md/Depends,)
  TITLE:=RAID10 Module
  KCONFIG:=CONFIG_MD_RAID10
  FILES:=$(LINUX_DIR)/drivers/md/raid10.ko
  AUTOLOAD:=$(call AutoLoad,28,raid10)
endef

define KernelPackage/md-raid10/description
 RAID Level 10 (Mirroring+Striping) driver module (raid10.ko)
endef

$(eval $(call KernelPackage,md-raid10))


define KernelPackage/md-raid456
$(call KernelPackage/md/Depends,+kmod-lib-raid6 +kmod-lib-xor)
  TITLE:=RAID Level 456 Driver
  KCONFIG:= \
       CONFIG_ASYNC_CORE \
       CONFIG_ASYNC_MEMCPY \
       CONFIG_ASYNC_XOR \
       CONFIG_ASYNC_PQ \
       CONFIG_ASYNC_RAID6_RECOV \
       CONFIG_ASYNC_RAID6_TEST=n \
       CONFIG_MD_RAID456 \
       CONFIG_MULTICORE_RAID456=n
  FILES:= \
	$(LINUX_DIR)/crypto/async_tx/async_tx.ko \
	$(LINUX_DIR)/crypto/async_tx/async_memcpy.ko \
	$(LINUX_DIR)/crypto/async_tx/async_xor.ko \
	$(LINUX_DIR)/crypto/async_tx/async_pq.ko \
	$(LINUX_DIR)/crypto/async_tx/async_raid6_recov.ko \
	$(LINUX_DIR)/drivers/md/raid456.ko
  AUTOLOAD:=$(call AutoLoad,28, async_tx async_memcpy async_xor async_pq async_raid6_recov raid456)
endef

define KernelPackage/md-raid456/description
 RAID Level 4,5,6 kernel module (raid456.ko)

 Includes the following modules required by
 raid456.ko:
    xor.ko
    async_tx.ko
    async_xor.ko
    async_memcpy.ko
    async_pq.ko
    async_raid5_recov.ko
    raid6_pq.ko
endef

$(eval $(call KernelPackage,md-raid456))


define KernelPackage/md-multipath
$(call KernelPackage/md/Depends,)
  TITLE:=MD Multipath Module
  KCONFIG:=CONFIG_MD_MULTIPATH
  FILES:=$(LINUX_DIR)/drivers/md/multipath.ko
  AUTOLOAD:=$(call AutoLoad,29,multipath)
endef

define KernelPackage/md-multipath/description
 Multipath driver module (multipath.ko)
endef

$(eval $(call KernelPackage,md-multipath))


define KernelPackage/ide-core
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=IDE (ATA/ATAPI) device support
  DEPENDS:=@PCI_SUPPORT
  KCONFIG:= \
	CONFIG_IDE \
	CONFIG_BLK_DEV_IDE \
	CONFIG_BLK_DEV_IDEDISK \
	CONFIG_IDE_GD \
	CONFIG_IDE_GD_ATA=y \
	CONFIG_IDE_GD_ATAPI=n \
	CONFIG_IDEPCI_PCIBUS_ORDER=y \
	CONFIG_BLK_DEV_IDEDMA_PCI=y \
	CONFIG_BLK_DEV_IDEPCI=y
  FILES:= \
	$(LINUX_DIR)/drivers/ide/ide-core.ko \
	$(LINUX_DIR)/drivers/ide/ide-gd_mod.ko
endef

define KernelPackage/ide-core/description
 Kernel support for IDE, useful for usb mass storage devices (e.g. on WL-HDD)
 Includes:
 - ide-core
 - ide-gd_mod
endef

$(eval $(call KernelPackage,ide-core))


define AddDepends/ide
  SUBMENU:=$(BLOCK_MENU)
  DEPENDS+=kmod-ide-core $(1)
endef


define KernelPackage/ide-generic
  SUBMENU:=$(BLOCK_MENU)
  DEPENDS:=@PCI_SUPPORT
  TITLE:=Kernel support for generic PCI IDE chipsets
  KCONFIG:=CONFIG_BLK_DEV_GENERIC
  FILES:=$(LINUX_DIR)/drivers/ide/ide-pci-generic.ko
  AUTOLOAD:=$(call AutoLoad,30,ide-pci-generic,1)
  $(call AddDepends/ide)
endef

$(eval $(call KernelPackage,ide-generic))


define KernelPackage/ide-generic-old
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Kernel support for generic (legacy) IDE chipsets
  KCONFIG:=CONFIG_IDE_GENERIC
  FILES:=$(LINUX_DIR)/drivers/ide/ide-generic.ko
  AUTOLOAD:=$(call AutoLoad,30,ide-generic,1)
  $(call AddDepends/ide)
endef

$(eval $(call KernelPackage,ide-generic-old))


define KernelPackage/ide-aec62xx
  TITLE:=Acard AEC62xx IDE driver
  DEPENDS:=@PCI_SUPPORT
  KCONFIG:=CONFIG_BLK_DEV_AEC62XX
  FILES:=$(LINUX_DIR)/drivers/ide/aec62xx.ko
  AUTOLOAD:=$(call AutoLoad,30,aec62xx,1)
  $(call AddDepends/ide)
endef

define KernelPackage/ide-aec62xx/description
 Support for Acard AEC62xx (Artop ATP8xx) IDE controllers
endef

$(eval $(call KernelPackage,ide-aec62xx,1))


define KernelPackage/ide-pdc202xx
  TITLE:=Promise PDC202xx IDE driver
  DEPENDS:=@PCI_SUPPORT
  KCONFIG:=CONFIG_BLK_DEV_PDC202XX_OLD
  FILES:=$(LINUX_DIR)/drivers/ide/pdc202xx_old.ko
  AUTOLOAD:=$(call AutoLoad,30,pdc202xx_old,1)
  $(call AddDepends/ide)
endef

define KernelPackage/ide-pdc202xx/description
 Support for the Promise Ultra 33/66/100 (PDC202{46|62|65|67|68}) IDE
 controllers.
endef

$(eval $(call KernelPackage,ide-pdc202xx))


define KernelPackage/ide-it821x
  TITLE:=ITE IT821x IDE driver
  DEPENDS:=@PCI_SUPPORT
  KCONFIG:=CONFIG_BLK_DEV_IT821X
  FILES=$(LINUX_DIR)/drivers/ide/it821x.ko
  AUTOLOAD:=$(call AutoLoad,30,it821x,1)
  $(call AddDepends/ide)
endef

define KernelPackage/ide-it821x/description
 Kernel module for the ITE IDE821x IDE controllers
endef

$(eval $(call KernelPackage,ide-it821x))


define KernelPackage/libsas
  SUBMENU:=$(BLOCK_MENU)
  DEPENDS:=@TARGET_x86
  TITLE:=SAS Domain Transport Attributes
  KCONFIG:=CONFIG_SCSI_SAS_LIBSAS \
	CONFIG_SCSI_SAS_ATTRS \
	CONFIG_SCSI_SAS_ATA=y \
	CONFIG_SCSI_SAS_HOST_SMP=y \
	CONFIG_SCSI_SAS_LIBSAS_DEBUG=y
  FILES:= \
	$(LINUX_DIR)/drivers/scsi/scsi_transport_sas.ko \
	$(LINUX_DIR)/drivers/scsi/libsas/libsas.ko
  AUTOLOAD:=$(call AutoLoad,29,scsi_transport_sas libsas,1)
endef

define KernelPackage/libsas/description
 SAS Domain Transport Attributes support
endef

$(eval $(call KernelPackage,libsas,1))


define KernelPackage/loop
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Loopback device support
  KCONFIG:= \
	CONFIG_BLK_DEV_LOOP \
	CONFIG_BLK_DEV_CRYPTOLOOP=n
  FILES:=$(LINUX_DIR)/drivers/block/loop.ko
  AUTOLOAD:=$(call AutoLoad,30,loop)
endef

define KernelPackage/loop/description
 Kernel module for loopback device support
endef

$(eval $(call KernelPackage,loop))


define KernelPackage/mvsas
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Marvell 88SE6440 SAS/SATA driver
  DEPENDS:=@TARGET_x86 +kmod-libsas
  KCONFIG:= \
	CONFIG_SCSI_MVSAS \
	CONFIG_SCSI_MVSAS_TASKLET=n
  FILES:=$(LINUX_DIR)/drivers/scsi/mvsas/mvsas.ko
  AUTOLOAD:=$(call AutoLoad,40,mvsas,1)
endef

define KernelPackage/mvsas/description
 Kernel support for the Marvell SAS SCSI adapters
endef

$(eval $(call KernelPackage,mvsas))


define KernelPackage/nbd
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Network block device support
  KCONFIG:=CONFIG_BLK_DEV_NBD
  FILES:=$(LINUX_DIR)/drivers/block/nbd.ko
  AUTOLOAD:=$(call AutoLoad,30,nbd)
endef

define KernelPackage/nbd/description
 Kernel module for network block device support
endef

$(eval $(call KernelPackage,nbd))


define KernelPackage/scsi-core
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=SCSI device support
  KCONFIG:= \
	CONFIG_SCSI \
	CONFIG_BLK_DEV_SD
  FILES:= \
	$(LINUX_DIR)/drivers/scsi/scsi_mod.ko \
	$(LINUX_DIR)/drivers/scsi/sd_mod.ko
  AUTOLOAD:=$(call AutoLoad,40,scsi_mod sd_mod,1)
endef

$(eval $(call KernelPackage,scsi-core))


define KernelPackage/scsi-generic
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Kernel support for SCSI generic
  DEPENDS:=+kmod-scsi-core
  KCONFIG:= \
	CONFIG_CHR_DEV_SG
  FILES:= \
	$(LINUX_DIR)/drivers/scsi/sg.ko
  AUTOLOAD:=$(call AutoLoad,65,sg)
endef

$(eval $(call KernelPackage,scsi-generic))


define KernelPackage/scsi-cdrom
  SUBMENU:=$(BLOCK_MENU)
  TITLE:=Kernel support for CD / DVD drives
  DEPENDS:=+kmod-scsi-core
  KCONFIG:= \
    CONFIG_BLK_DEV_SR \
    CONFIG_BLK_DEV_SR_VENDOR=n
  FILES:= \
    $(LINUX_DIR)/drivers/cdrom/cdrom.ko \
    $(LINUX_DIR)/drivers/scsi/sr_mod.ko
  AUTOLOAD:=$(call AutoLoad,45,sr_mod)
endef

$(eval $(call KernelPackage,scsi-cdrom))
