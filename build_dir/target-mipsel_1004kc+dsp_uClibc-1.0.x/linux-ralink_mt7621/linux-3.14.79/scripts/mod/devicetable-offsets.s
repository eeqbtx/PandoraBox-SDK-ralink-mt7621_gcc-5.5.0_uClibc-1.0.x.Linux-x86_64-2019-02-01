	.section .mdebug.abi32
	.previous
	.nan	legacy
	.module	softfloat
	.module	oddspreg

 # -G value = 0, Arch = mips32r2, ISA = 33
 # GNU C89 (PandoraBox GCC 5.5.0 2019-02-01-git-93f2639a7) version 5.5.0 (mipsel-openwrt-linux-uclibc)
 #	compiled by GNU C version 7.3.0, GMP version 5.1.3, MPFR version 3.1.2, MPC version 1.0.2
 # GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
 # options passed:  -nostdinc
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include
 # -I arch/mips/include/generated -I include
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/uapi
 # -I arch/mips/include/generated/uapi
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/include/uapi
 # -I include/generated/uapi
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/mach-ralink
 # -I /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/arch/mips/include/asm/mach-generic
 # -idirafter /home/lintel/PandoraBox-MT7621/staging_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/usr/include
 # -D __KERNEL__ -D VMLINUX_LOAD_ADDRESS=0xffffffff80001000 -D DATAOFFSET=0
 # -D GAS_HAS_SET_HARDFLOAT -D CC_HAVE_ASM_GOTO -D KBUILD_STR(s)=#s
 # -D KBUILD_BASENAME=KBUILD_STR(devicetable_offsets)
 # -D KBUILD_MODNAME=KBUILD_STR(devicetable_offsets)
 # -isystem /home/lintel/PandoraBox-MT7621/staging_dir/toolchain-mipsel_1004kc+dsp_gcc-5.5.0_uClibc-1.0.x/lib/gcc/mipsel-openwrt-linux-uclibc/5.5.0/include
 # -include /home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79/include/linux/kconfig.h
 # -MD scripts/mod/.devicetable-offsets.s.d
 # scripts/mod/devicetable-offsets.c -G 0 -mel -mno-check-zero-division
 # -mabi=32 -mno-abicalls -mno-branch-likely -msoft-float -march=mips32r2
 # -mtune=1004kc -mllsc -mplt -mips32r2 -mno-shared
 # -auxbase-strip scripts/mod/devicetable-offsets.s -g -Os -Wall -Wundef
 # -Wstrict-prototypes -Wno-trigraphs -Werror=implicit-function-declaration
 # -Wno-format-security -Wno-maybe-uninitialized -Wframe-larger-than=2048
 # -Wno-unused-but-set-variable -Wdeclaration-after-statement
 # -Wno-pointer-sign -Werror=implicit-int -Werror=strict-prototypes
 # -Werror=date-time -std=gnu90 -fno-strict-aliasing -fno-common
 # -fno-delete-null-pointer-checks -fno-caller-saves -fno-pic
 # -ffreestanding -fstack-protector -fomit-frame-pointer
 # -fno-var-tracking-assignments -femit-struct-debug-baseonly
 # -fno-var-tracking -fno-strict-overflow -fconserve-stack
 # -ffunction-sections -fdata-sections -fverbose-asm
 # options enabled:  -faggressive-loop-optimizations -falign-functions
 # -falign-jumps -falign-labels -falign-loops -fauto-inc-dec
 # -fbranch-count-reg -fchkp-check-incomplete-type -fchkp-check-read
 # -fchkp-check-write -fchkp-instrument-calls -fchkp-narrow-bounds
 # -fchkp-optimize -fchkp-store-bounds -fchkp-use-static-bounds
 # -fchkp-use-static-const-bounds -fchkp-use-wrappers
 # -fcombine-stack-adjustments -fcompare-elim -fcprop-registers
 # -fcrossjumping -fcse-follow-jumps -fdata-sections -fdefer-pop
 # -fdelayed-branch -fdevirtualize -fdevirtualize-speculatively
 # -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
 # -fexpensive-optimizations -fforward-propagate -ffunction-cse
 # -ffunction-sections -fgcse -fgcse-lm -fgnu-runtime -fgnu-unique
 # -fguess-branch-probability -fhoist-adjacent-loads -fident
 # -fif-conversion -fif-conversion2 -findirect-inlining -finline
 # -finline-atomics -finline-functions -finline-functions-called-once
 # -finline-small-functions -fipa-cp -fipa-cp-alignment -fipa-icf
 # -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
 # -fipa-ra -fipa-reference -fipa-sra -fira-hoist-pressure
 # -fira-share-save-slots -fira-share-spill-slots
 # -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
 # -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
 # -fmath-errno -fmerge-constants -fmerge-debug-strings
 # -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
 # -fpartial-inlining -fpcc-struct-return -fpeephole -fpeephole2 -fplt
 # -fprefetch-loop-arrays -freorder-blocks -freorder-functions
 # -frerun-cse-after-loop -fsched-critical-path-heuristic
 # -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
 # -fsched-last-insn-heuristic -fsched-rank-heuristic -fsched-spec
 # -fsched-spec-insn-heuristic -fsched-stalled-insns-dep -fschedule-fusion
 # -fschedule-insns2 -fsemantic-interposition -fshow-column -fshrink-wrap
 # -fsigned-zeros -fsplit-ivs-in-unroller -fsplit-wide-types -fssa-phiopt
 # -fstack-protector -fstdarg-opt -fstrict-volatile-bitfields
 # -fsync-libcalls -fthread-jumps -ftoplevel-reorder -ftrapping-math
 # -ftree-bit-ccp -ftree-builtin-call-dce -ftree-ccp -ftree-ch
 # -ftree-coalesce-vars -ftree-copy-prop -ftree-copyrename -ftree-cselim
 # -ftree-dce -ftree-dominator-opts -ftree-dse -ftree-forwprop -ftree-fre
 # -ftree-loop-if-convert -ftree-loop-im -ftree-loop-ivcanon
 # -ftree-loop-optimize -ftree-parallelize-loops= -ftree-phiprop -ftree-pre
 # -ftree-pta -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr
 # -ftree-sra -ftree-switch-conversion -ftree-tail-merge -ftree-ter
 # -ftree-vrp -funit-at-a-time -fverbose-asm -fzero-initialized-in-bss
 # -mdivide-traps -mdouble-float -mel -mexplicit-relocs -mextern-sdata
 # -mfp-exceptions -mfp32 -mfused-madd -mgp32 -mgpopt -mimadd -mllsc
 # -mlocal-sdata -mlong32 -mlra -mmemcpy -mno-mdmx -mno-mips16 -mno-mips3d
 # -modd-spreg -mplt -msoft-float -msplit-addresses -muclibc

	.text
$Ltext0:
	.cfi_sections	.debug_frame
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.globl	main
$LFB12 = .
	.file 1 "scripts/mod/devicetable-offsets.c"
	.loc 1 9 0
	.cfi_startproc
	.set	nomips16
	.set	nomicromips
	.ent	main
	.type	main, @function
main:
	.frame	$sp,0,$31		# vars= 0, regs= 0/0, args= 0, gp= 0
	.mask	0x00000000,0
	.fmask	0x00000000,0
	.loc 1 10 0
#APP
 # 10 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_usb_device_id 24 sizeof(struct usb_device_id)	 #
 # 0 "" 2
	.loc 1 11 0
 # 11 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_match_flags 0 offsetof(struct usb_device_id, match_flags)	 #
 # 0 "" 2
	.loc 1 12 0
 # 12 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_idVendor 2 offsetof(struct usb_device_id, idVendor)	 #
 # 0 "" 2
	.loc 1 13 0
 # 13 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_idProduct 4 offsetof(struct usb_device_id, idProduct)	 #
 # 0 "" 2
	.loc 1 14 0
 # 14 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bcdDevice_lo 6 offsetof(struct usb_device_id, bcdDevice_lo)	 #
 # 0 "" 2
	.loc 1 15 0
 # 15 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bcdDevice_hi 8 offsetof(struct usb_device_id, bcdDevice_hi)	 #
 # 0 "" 2
	.loc 1 16 0
 # 16 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceClass 10 offsetof(struct usb_device_id, bDeviceClass)	 #
 # 0 "" 2
	.loc 1 17 0
 # 17 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceSubClass 11 offsetof(struct usb_device_id, bDeviceSubClass)	 #
 # 0 "" 2
	.loc 1 18 0
 # 18 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bDeviceProtocol 12 offsetof(struct usb_device_id, bDeviceProtocol)	 #
 # 0 "" 2
	.loc 1 19 0
 # 19 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceClass 13 offsetof(struct usb_device_id, bInterfaceClass)	 #
 # 0 "" 2
	.loc 1 20 0
 # 20 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceSubClass 14 offsetof(struct usb_device_id, bInterfaceSubClass)	 #
 # 0 "" 2
	.loc 1 21 0
 # 21 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceProtocol 15 offsetof(struct usb_device_id, bInterfaceProtocol)	 #
 # 0 "" 2
	.loc 1 22 0
 # 22 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_usb_device_id_bInterfaceNumber 16 offsetof(struct usb_device_id, bInterfaceNumber)	 #
 # 0 "" 2
	.loc 1 24 0
 # 24 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_hid_device_id 16 sizeof(struct hid_device_id)	 #
 # 0 "" 2
	.loc 1 25 0
 # 25 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_bus 0 offsetof(struct hid_device_id, bus)	 #
 # 0 "" 2
	.loc 1 26 0
 # 26 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_group 2 offsetof(struct hid_device_id, group)	 #
 # 0 "" 2
	.loc 1 27 0
 # 27 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_vendor 4 offsetof(struct hid_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 28 0
 # 28 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hid_device_id_product 8 offsetof(struct hid_device_id, product)	 #
 # 0 "" 2
	.loc 1 30 0
 # 30 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ieee1394_device_id 24 sizeof(struct ieee1394_device_id)	 #
 # 0 "" 2
	.loc 1 31 0
 # 31 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_match_flags 0 offsetof(struct ieee1394_device_id, match_flags)	 #
 # 0 "" 2
	.loc 1 32 0
 # 32 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_vendor_id 4 offsetof(struct ieee1394_device_id, vendor_id)	 #
 # 0 "" 2
	.loc 1 33 0
 # 33 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_model_id 8 offsetof(struct ieee1394_device_id, model_id)	 #
 # 0 "" 2
	.loc 1 34 0
 # 34 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_specifier_id 12 offsetof(struct ieee1394_device_id, specifier_id)	 #
 # 0 "" 2
	.loc 1 35 0
 # 35 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ieee1394_device_id_version 16 offsetof(struct ieee1394_device_id, version)	 #
 # 0 "" 2
	.loc 1 37 0
 # 37 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pci_device_id 28 sizeof(struct pci_device_id)	 #
 # 0 "" 2
	.loc 1 38 0
 # 38 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_vendor 0 offsetof(struct pci_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 39 0
 # 39 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_device 4 offsetof(struct pci_device_id, device)	 #
 # 0 "" 2
	.loc 1 40 0
 # 40 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_subvendor 8 offsetof(struct pci_device_id, subvendor)	 #
 # 0 "" 2
	.loc 1 41 0
 # 41 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_subdevice 12 offsetof(struct pci_device_id, subdevice)	 #
 # 0 "" 2
	.loc 1 42 0
 # 42 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_class 16 offsetof(struct pci_device_id, class)	 #
 # 0 "" 2
	.loc 1 43 0
 # 43 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pci_device_id_class_mask 20 offsetof(struct pci_device_id, class_mask)	 #
 # 0 "" 2
	.loc 1 45 0
 # 45 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ccw_device_id 12 sizeof(struct ccw_device_id)	 #
 # 0 "" 2
	.loc 1 46 0
 # 46 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_match_flags 0 offsetof(struct ccw_device_id, match_flags)	 #
 # 0 "" 2
	.loc 1 47 0
 # 47 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_cu_type 2 offsetof(struct ccw_device_id, cu_type)	 #
 # 0 "" 2
	.loc 1 48 0
 # 48 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_cu_model 6 offsetof(struct ccw_device_id, cu_model)	 #
 # 0 "" 2
	.loc 1 49 0
 # 49 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_dev_type 4 offsetof(struct ccw_device_id, dev_type)	 #
 # 0 "" 2
	.loc 1 50 0
 # 50 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ccw_device_id_dev_model 7 offsetof(struct ccw_device_id, dev_model)	 #
 # 0 "" 2
	.loc 1 52 0
 # 52 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ap_device_id 8 sizeof(struct ap_device_id)	 #
 # 0 "" 2
	.loc 1 53 0
 # 53 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ap_device_id_dev_type 2 offsetof(struct ap_device_id, dev_type)	 #
 # 0 "" 2
	.loc 1 55 0
 # 55 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_css_device_id 8 sizeof(struct css_device_id)	 #
 # 0 "" 2
	.loc 1 56 0
 # 56 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_css_device_id_type 1 offsetof(struct css_device_id, type)	 #
 # 0 "" 2
	.loc 1 58 0
 # 58 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_serio_device_id 4 sizeof(struct serio_device_id)	 #
 # 0 "" 2
	.loc 1 59 0
 # 59 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_type 0 offsetof(struct serio_device_id, type)	 #
 # 0 "" 2
	.loc 1 60 0
 # 60 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_proto 3 offsetof(struct serio_device_id, proto)	 #
 # 0 "" 2
	.loc 1 61 0
 # 61 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_id 2 offsetof(struct serio_device_id, id)	 #
 # 0 "" 2
	.loc 1 62 0
 # 62 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_serio_device_id_extra 1 offsetof(struct serio_device_id, extra)	 #
 # 0 "" 2
	.loc 1 64 0
 # 64 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_acpi_device_id 16 sizeof(struct acpi_device_id)	 #
 # 0 "" 2
	.loc 1 65 0
 # 65 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_acpi_device_id_id 0 offsetof(struct acpi_device_id, id)	 #
 # 0 "" 2
	.loc 1 67 0
 # 67 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pnp_device_id 12 sizeof(struct pnp_device_id)	 #
 # 0 "" 2
	.loc 1 68 0
 # 68 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pnp_device_id_id 0 offsetof(struct pnp_device_id, id)	 #
 # 0 "" 2
	.loc 1 70 0
 # 70 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pnp_card_device_id 76 sizeof(struct pnp_card_device_id)	 #
 # 0 "" 2
	.loc 1 71 0
 # 71 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pnp_card_device_id_devs 12 offsetof(struct pnp_card_device_id, devs)	 #
 # 0 "" 2
	.loc 1 73 0
 # 73 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_pcmcia_device_id 52 sizeof(struct pcmcia_device_id)	 #
 # 0 "" 2
	.loc 1 74 0
 # 74 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_match_flags 0 offsetof(struct pcmcia_device_id, match_flags)	 #
 # 0 "" 2
	.loc 1 75 0
 # 75 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_manf_id 2 offsetof(struct pcmcia_device_id, manf_id)	 #
 # 0 "" 2
	.loc 1 76 0
 # 76 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_card_id 4 offsetof(struct pcmcia_device_id, card_id)	 #
 # 0 "" 2
	.loc 1 77 0
 # 77 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_func_id 6 offsetof(struct pcmcia_device_id, func_id)	 #
 # 0 "" 2
	.loc 1 78 0
 # 78 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_function 7 offsetof(struct pcmcia_device_id, function)	 #
 # 0 "" 2
	.loc 1 79 0
 # 79 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_device_no 8 offsetof(struct pcmcia_device_id, device_no)	 #
 # 0 "" 2
	.loc 1 80 0
 # 80 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_pcmcia_device_id_prod_id_hash 12 offsetof(struct pcmcia_device_id, prod_id_hash)	 #
 # 0 "" 2
	.loc 1 82 0
 # 82 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_of_device_id 196 sizeof(struct of_device_id)	 #
 # 0 "" 2
	.loc 1 83 0
 # 83 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_name 0 offsetof(struct of_device_id, name)	 #
 # 0 "" 2
	.loc 1 84 0
 # 84 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_type 32 offsetof(struct of_device_id, type)	 #
 # 0 "" 2
	.loc 1 85 0
 # 85 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_of_device_id_compatible 64 offsetof(struct of_device_id, compatible)	 #
 # 0 "" 2
	.loc 1 87 0
 # 87 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_vio_device_id 64 sizeof(struct vio_device_id)	 #
 # 0 "" 2
	.loc 1 88 0
 # 88 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_vio_device_id_type 0 offsetof(struct vio_device_id, type)	 #
 # 0 "" 2
	.loc 1 89 0
 # 89 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_vio_device_id_compat 32 offsetof(struct vio_device_id, compat)	 #
 # 0 "" 2
	.loc 1 91 0
 # 91 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_input_device_id 160 sizeof(struct input_device_id)	 #
 # 0 "" 2
	.loc 1 92 0
 # 92 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_flags 0 offsetof(struct input_device_id, flags)	 #
 # 0 "" 2
	.loc 1 93 0
 # 93 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_bustype 4 offsetof(struct input_device_id, bustype)	 #
 # 0 "" 2
	.loc 1 94 0
 # 94 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_vendor 6 offsetof(struct input_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 95 0
 # 95 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_product 8 offsetof(struct input_device_id, product)	 #
 # 0 "" 2
	.loc 1 96 0
 # 96 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_version 10 offsetof(struct input_device_id, version)	 #
 # 0 "" 2
	.loc 1 97 0
 # 97 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_evbit 12 offsetof(struct input_device_id, evbit)	 #
 # 0 "" 2
	.loc 1 98 0
 # 98 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_keybit 16 offsetof(struct input_device_id, keybit)	 #
 # 0 "" 2
	.loc 1 99 0
 # 99 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_relbit 112 offsetof(struct input_device_id, relbit)	 #
 # 0 "" 2
	.loc 1 100 0
 # 100 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_absbit 116 offsetof(struct input_device_id, absbit)	 #
 # 0 "" 2
	.loc 1 101 0
 # 101 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_mscbit 124 offsetof(struct input_device_id, mscbit)	 #
 # 0 "" 2
	.loc 1 102 0
 # 102 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_ledbit 128 offsetof(struct input_device_id, ledbit)	 #
 # 0 "" 2
	.loc 1 103 0
 # 103 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_sndbit 132 offsetof(struct input_device_id, sndbit)	 #
 # 0 "" 2
	.loc 1 104 0
 # 104 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_ffbit 136 offsetof(struct input_device_id, ffbit)	 #
 # 0 "" 2
	.loc 1 105 0
 # 105 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_input_device_id_swbit 152 offsetof(struct input_device_id, swbit)	 #
 # 0 "" 2
	.loc 1 107 0
 # 107 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_eisa_device_id 12 sizeof(struct eisa_device_id)	 #
 # 0 "" 2
	.loc 1 108 0
 # 108 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_eisa_device_id_sig 0 offsetof(struct eisa_device_id, sig)	 #
 # 0 "" 2
	.loc 1 110 0
 # 110 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_parisc_device_id 8 sizeof(struct parisc_device_id)	 #
 # 0 "" 2
	.loc 1 111 0
 # 111 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hw_type 0 offsetof(struct parisc_device_id, hw_type)	 #
 # 0 "" 2
	.loc 1 112 0
 # 112 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hversion 2 offsetof(struct parisc_device_id, hversion)	 #
 # 0 "" 2
	.loc 1 113 0
 # 113 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_hversion_rev 1 offsetof(struct parisc_device_id, hversion_rev)	 #
 # 0 "" 2
	.loc 1 114 0
 # 114 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_parisc_device_id_sversion 4 offsetof(struct parisc_device_id, sversion)	 #
 # 0 "" 2
	.loc 1 116 0
 # 116 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_sdio_device_id 12 sizeof(struct sdio_device_id)	 #
 # 0 "" 2
	.loc 1 117 0
 # 117 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_class 0 offsetof(struct sdio_device_id, class)	 #
 # 0 "" 2
	.loc 1 118 0
 # 118 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_vendor 2 offsetof(struct sdio_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 119 0
 # 119 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_sdio_device_id_device 4 offsetof(struct sdio_device_id, device)	 #
 # 0 "" 2
	.loc 1 121 0
 # 121 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ssb_device_id 6 sizeof(struct ssb_device_id)	 #
 # 0 "" 2
	.loc 1 122 0
 # 122 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_vendor 0 offsetof(struct ssb_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 123 0
 # 123 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_coreid 2 offsetof(struct ssb_device_id, coreid)	 #
 # 0 "" 2
	.loc 1 124 0
 # 124 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ssb_device_id_revision 4 offsetof(struct ssb_device_id, revision)	 #
 # 0 "" 2
	.loc 1 126 0
 # 126 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_bcma_device_id 6 sizeof(struct bcma_device_id)	 #
 # 0 "" 2
	.loc 1 127 0
 # 127 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_manuf 0 offsetof(struct bcma_device_id, manuf)	 #
 # 0 "" 2
	.loc 1 128 0
 # 128 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_id 2 offsetof(struct bcma_device_id, id)	 #
 # 0 "" 2
	.loc 1 129 0
 # 129 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_rev 4 offsetof(struct bcma_device_id, rev)	 #
 # 0 "" 2
	.loc 1 130 0
 # 130 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_bcma_device_id_class 5 offsetof(struct bcma_device_id, class)	 #
 # 0 "" 2
	.loc 1 132 0
 # 132 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_virtio_device_id 8 sizeof(struct virtio_device_id)	 #
 # 0 "" 2
	.loc 1 133 0
 # 133 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_virtio_device_id_device 0 offsetof(struct virtio_device_id, device)	 #
 # 0 "" 2
	.loc 1 134 0
 # 134 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_virtio_device_id_vendor 4 offsetof(struct virtio_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 136 0
 # 136 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_hv_vmbus_device_id 20 sizeof(struct hv_vmbus_device_id)	 #
 # 0 "" 2
	.loc 1 137 0
 # 137 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_hv_vmbus_device_id_guid 0 offsetof(struct hv_vmbus_device_id, guid)	 #
 # 0 "" 2
	.loc 1 139 0
 # 139 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_i2c_device_id 24 sizeof(struct i2c_device_id)	 #
 # 0 "" 2
	.loc 1 140 0
 # 140 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_i2c_device_id_name 0 offsetof(struct i2c_device_id, name)	 #
 # 0 "" 2
	.loc 1 142 0
 # 142 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_spi_device_id 36 sizeof(struct spi_device_id)	 #
 # 0 "" 2
	.loc 1 143 0
 # 143 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_spi_device_id_name 0 offsetof(struct spi_device_id, name)	 #
 # 0 "" 2
	.loc 1 145 0
 # 145 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_dmi_system_id 332 sizeof(struct dmi_system_id)	 #
 # 0 "" 2
	.loc 1 146 0
 # 146 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_dmi_system_id_matches 8 offsetof(struct dmi_system_id, matches)	 #
 # 0 "" 2
	.loc 1 148 0
 # 148 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_platform_device_id 24 sizeof(struct platform_device_id)	 #
 # 0 "" 2
	.loc 1 149 0
 # 149 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_platform_device_id_name 0 offsetof(struct platform_device_id, name)	 #
 # 0 "" 2
	.loc 1 151 0
 # 151 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_mdio_device_id 8 sizeof(struct mdio_device_id)	 #
 # 0 "" 2
	.loc 1 152 0
 # 152 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mdio_device_id_phy_id 0 offsetof(struct mdio_device_id, phy_id)	 #
 # 0 "" 2
	.loc 1 153 0
 # 153 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mdio_device_id_phy_id_mask 4 offsetof(struct mdio_device_id, phy_id_mask)	 #
 # 0 "" 2
	.loc 1 155 0
 # 155 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_zorro_device_id 8 sizeof(struct zorro_device_id)	 #
 # 0 "" 2
	.loc 1 156 0
 # 156 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_zorro_device_id_id 0 offsetof(struct zorro_device_id, id)	 #
 # 0 "" 2
	.loc 1 158 0
 # 158 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_isapnp_device_id 12 sizeof(struct isapnp_device_id)	 #
 # 0 "" 2
	.loc 1 159 0
 # 159 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_isapnp_device_id_vendor 4 offsetof(struct isapnp_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 160 0
 # 160 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_isapnp_device_id_function 6 offsetof(struct isapnp_device_id, function)	 #
 # 0 "" 2
	.loc 1 162 0
 # 162 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_ipack_device_id 12 sizeof(struct ipack_device_id)	 #
 # 0 "" 2
	.loc 1 163 0
 # 163 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_format 0 offsetof(struct ipack_device_id, format)	 #
 # 0 "" 2
	.loc 1 164 0
 # 164 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_vendor 4 offsetof(struct ipack_device_id, vendor)	 #
 # 0 "" 2
	.loc 1 165 0
 # 165 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_ipack_device_id_device 8 offsetof(struct ipack_device_id, device)	 #
 # 0 "" 2
	.loc 1 167 0
 # 167 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_amba_id 12 sizeof(struct amba_id)	 #
 # 0 "" 2
	.loc 1 168 0
 # 168 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_amba_id_id 0 offsetof(struct amba_id, id)	 #
 # 0 "" 2
	.loc 1 169 0
 # 169 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_amba_id_mask 4 offsetof(struct amba_id, mask)	 #
 # 0 "" 2
	.loc 1 171 0
 # 171 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_x86_cpu_id 12 sizeof(struct x86_cpu_id)	 #
 # 0 "" 2
	.loc 1 172 0
 # 172 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_feature 6 offsetof(struct x86_cpu_id, feature)	 #
 # 0 "" 2
	.loc 1 173 0
 # 173 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_family 2 offsetof(struct x86_cpu_id, family)	 #
 # 0 "" 2
	.loc 1 174 0
 # 174 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_model 4 offsetof(struct x86_cpu_id, model)	 #
 # 0 "" 2
	.loc 1 175 0
 # 175 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_x86_cpu_id_vendor 0 offsetof(struct x86_cpu_id, vendor)	 #
 # 0 "" 2
	.loc 1 177 0
 # 177 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_mei_cl_device_id 36 sizeof(struct mei_cl_device_id)	 #
 # 0 "" 2
	.loc 1 178 0
 # 178 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_mei_cl_device_id_name 0 offsetof(struct mei_cl_device_id, name)	 #
 # 0 "" 2
	.loc 1 180 0
 # 180 "scripts/mod/devicetable-offsets.c" 1
	
->SIZE_rio_device_id 8 sizeof(struct rio_device_id)	 #
 # 0 "" 2
	.loc 1 181 0
 # 181 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_did 0 offsetof(struct rio_device_id, did)	 #
 # 0 "" 2
	.loc 1 182 0
 # 182 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_vid 2 offsetof(struct rio_device_id, vid)	 #
 # 0 "" 2
	.loc 1 183 0
 # 183 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_asm_did 4 offsetof(struct rio_device_id, asm_did)	 #
 # 0 "" 2
	.loc 1 184 0
 # 184 "scripts/mod/devicetable-offsets.c" 1
	
->OFF_rio_device_id_asm_vid 6 offsetof(struct rio_device_id, asm_vid)	 #
 # 0 "" 2
	.loc 1 187 0
#NO_APP
	.set	noreorder
	.set	nomacro
	j	$31
	move	$2,$0	 #,
	.set	macro
	.set	reorder

	.end	main
	.cfi_endproc
$LFE12:
	.size	main, .-main
	.text
$Letext0:
	.section	.debug_info,"",@progbits
$Ldebug_info0:
	.4byte	0x8b
	.2byte	0x4
	.4byte	$Ldebug_abbrev0
	.byte	0x4
	.uleb128 0x1
	.4byte	$LASF11
	.byte	0x1
	.4byte	$LASF12
	.4byte	$LASF13
	.4byte	$Ldebug_ranges0+0
	.4byte	0
	.4byte	$Ldebug_line0
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF0
	.uleb128 0x2
	.byte	0x1
	.byte	0x8
	.4byte	$LASF1
	.uleb128 0x2
	.byte	0x2
	.byte	0x5
	.4byte	$LASF2
	.uleb128 0x2
	.byte	0x2
	.byte	0x7
	.4byte	$LASF3
	.uleb128 0x3
	.byte	0x4
	.byte	0x5
	.ascii	"int\000"
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF4
	.uleb128 0x2
	.byte	0x8
	.byte	0x5
	.4byte	$LASF5
	.uleb128 0x2
	.byte	0x8
	.byte	0x7
	.4byte	$LASF6
	.uleb128 0x2
	.byte	0x4
	.byte	0x7
	.4byte	$LASF7
	.uleb128 0x2
	.byte	0x4
	.byte	0x5
	.4byte	$LASF8
	.uleb128 0x2
	.byte	0x1
	.byte	0x6
	.4byte	$LASF9
	.uleb128 0x2
	.byte	0x1
	.byte	0x2
	.4byte	$LASF10
	.uleb128 0x4
	.4byte	$LASF14
	.byte	0x1
	.byte	0x8
	.4byte	0x41
	.4byte	$LFB12
	.4byte	$LFE12-$LFB12
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
$Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x6
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x1c
	.2byte	0x2
	.4byte	$Ldebug_info0
	.byte	0x4
	.byte	0
	.2byte	0
	.2byte	0
	.4byte	$LFB12
	.4byte	$LFE12-$LFB12
	.4byte	0
	.4byte	0
	.section	.debug_ranges,"",@progbits
$Ldebug_ranges0:
	.4byte	$LFB12
	.4byte	$LFE12
	.4byte	0
	.4byte	0
	.section	.debug_line,"",@progbits
$Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
$LASF5:
	.ascii	"long long int\000"
$LASF4:
	.ascii	"unsigned int\000"
$LASF11:
	.ascii	"GNU C89 5.5.0 -G 0 -mel -mno-check-zero-division -mabi=3"
	.ascii	"2 -mno-abicalls -mno-branch-likely -msoft-float -march=m"
	.ascii	"ips32r2 -mtune=1004kc -mllsc -mplt -mips32r2 -mno-shared"
	.ascii	" -g -Os -std=gnu90 -fno-strict-aliasing -fno-common -fno"
	.ascii	"-delete-null-pointer-checks -fno-caller-saves -fno-pic -"
	.ascii	"ffreestanding -fstack-protector -fomit-frame-pointer -fn"
	.ascii	"o-var-tracking-assignments -femit-struct-debug-baseonly "
	.ascii	"-fno-var-tracking -fno-strict-overflow -fconserve-stack "
	.ascii	"-ffunction-sections -fdata-sections\000"
$LASF14:
	.ascii	"main\000"
$LASF7:
	.ascii	"long unsigned int\000"
$LASF13:
	.ascii	"/home/lintel/PandoraBox-MT7621/build_dir/target-mipsel_1"
	.ascii	"004kc+dsp_uClibc-1.0.x/linux-ralink_mt7621/linux-3.14.79"
	.ascii	"\000"
$LASF6:
	.ascii	"long long unsigned int\000"
$LASF1:
	.ascii	"unsigned char\000"
$LASF9:
	.ascii	"char\000"
$LASF8:
	.ascii	"long int\000"
$LASF10:
	.ascii	"_Bool\000"
$LASF3:
	.ascii	"short unsigned int\000"
$LASF0:
	.ascii	"signed char\000"
$LASF12:
	.ascii	"scripts/mod/devicetable-offsets.c\000"
$LASF2:
	.ascii	"short int\000"
	.ident	"GCC: (PandoraBox GCC 5.5.0 2019-02-01-git-93f2639a7) 5.5.0"
	.section	.note.GNU-stack,"",@progbits
