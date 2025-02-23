#
# Copyright (C) 2006-2013 OpenWrt.org
#
# This is free software, licensed under the GNU General Public License v2.
# See /LICENSE for more information.
#

INPUT_MODULES_MENU:=Input modules

define KernelPackage/hid
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=HID Devices
  KCONFIG:=CONFIG_HID CONFIG_HIDRAW=y
  FILES:=$(LINUX_DIR)/drivers/hid/hid.ko
  AUTOLOAD:=$(call AutoLoad,61,hid)
  $(call AddDepends/input,+kmod-input-evdev)
endef

define KernelPackage/hid/description
 Kernel modules for HID devices
endef

$(eval $(call KernelPackage,hid))

define KernelPackage/hid-generic
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Generic HID device support
  KCONFIG:=CONFIG_HID_GENERIC
  FILES:=$(LINUX_DIR)/drivers/hid/hid-generic.ko
  AUTOLOAD:=$(call AutoProbe,hid-generic)
  $(call AddDepends/hid)
endef

define KernelPackage/hid/description
 Kernel modules for generic HID device (e.g. keyboards and mice) support
endef

$(eval $(call KernelPackage,hid-generic))

define KernelPackage/input-core
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Input device core
  KCONFIG:=CONFIG_INPUT
  FILES:=$(LINUX_DIR)/drivers/input/input-core.ko
endef

define KernelPackage/input-core/description
 Kernel modules for support of input device
endef

$(eval $(call KernelPackage,input-core))


define KernelPackage/input-evdev
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Input event device
  KCONFIG:=CONFIG_INPUT_EVDEV
  FILES:=$(LINUX_DIR)/drivers/input/evdev.ko
  AUTOLOAD:=$(call AutoLoad,60,evdev)
  $(call AddDepends/input)
endef

define KernelPackage/input-evdev/description
 Kernel modules for support of input device events
endef

$(eval $(call KernelPackage,input-evdev))


define KernelPackage/input-gpio-keys
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=GPIO key support
  DEPENDS:= @GPIO_SUPPORT
  KCONFIG:= \
	CONFIG_KEYBOARD_GPIO \
	CONFIG_INPUT_KEYBOARD=y
  FILES:=$(LINUX_DIR)/drivers/input/keyboard/gpio_keys.ko
  AUTOLOAD:=$(call AutoProbe,gpio_keys)
  $(call AddDepends/input)
endef

define KernelPackage/input-gpio-keys/description
 This driver implements support for buttons connected
 to GPIO pins of various CPUs (and some other chips).
endef

$(eval $(call KernelPackage,input-gpio-keys))


define KernelPackage/input-gpio-keys-polled
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Polled GPIO key support
  DEPENDS:=@GPIO_SUPPORT +kmod-input-polldev
  KCONFIG:= \
	CONFIG_KEYBOARD_GPIO_POLLED \
	CONFIG_INPUT_KEYBOARD=y
  FILES:=$(LINUX_DIR)/drivers/input/keyboard/gpio_keys_polled.ko
  AUTOLOAD:=$(call AutoProbe,gpio_keys_polled,1)
  $(call AddDepends/input)
endef

define KernelPackage/input-gpio-keys-polled/description
 Kernel module for support polled GPIO keys input device
endef

$(eval $(call KernelPackage,input-gpio-keys-polled))


define KernelPackage/input-gpio-encoder
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=GPIO rotay encoder
  KCONFIG:=CONFIG_INPUT_GPIO_ROTARY_ENCODER
  FILES:=$(LINUX_DIR)/drivers/input/misc/rotary_encoder.ko
  AUTOLOAD:=$(call AutoProbe,rotary_encoder)
  $(call AddDepends/input,@GPIO_SUPPORT)
endef

define KernelPackage/gpio-encoder/description
 Kernel module to use rotary encoders connected to GPIO pins
endef

$(eval $(call KernelPackage,input-gpio-encoder))


define KernelPackage/input-joydev
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Joystick device support
  KCONFIG:=CONFIG_INPUT_JOYDEV
  FILES:=$(LINUX_DIR)/drivers/input/joydev.ko
  AUTOLOAD:=$(call AutoProbe,joydev)
  $(call AddDepends/input)
endef

define KernelPackage/input-joydev/description
 Kernel module for joystick support
endef

$(eval $(call KernelPackage,input-joydev))


define KernelPackage/input-polldev
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Polled Input device support
  KCONFIG:=CONFIG_INPUT_POLLDEV
  FILES:=$(LINUX_DIR)/drivers/input/input-polldev.ko
  $(call AddDepends/input)
endef

define KernelPackage/input-polldev/description
 Kernel module for support of polled input devices
endef

$(eval $(call KernelPackage,input-polldev))


define KernelPackage/input-matrixkmap
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Input matrix devices support
  KCONFIG:=CONFIG_INPUT_MATRIXKMAP
  DEPENDS:=@!LINUX_3_3
  FILES:=$(LINUX_DIR)/drivers/input/matrix-keymap.ko
  AUTOLOAD:=$(call AutoProbe,matrix-keymap)
  $(call AddDepends/input)
endef

define KernelPackage/input-matrix/description
 Kernel module support for input matrix devices
endef

$(eval $(call KernelPackage,input-matrixkmap))


define KernelPackage/acpi-button
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=ACPI Button Support
  DEPENDS:=@(TARGET_x86_generic||TARGET_x86_kvm_guest||TARGET_x86_xen_domu) +kmod-input-evdev
  KCONFIG:=CONFIG_ACPI_BUTTON
  FILES:=$(LINUX_DIR)/drivers/acpi/button.ko
  AUTOLOAD:=$(call AutoLoad,06,button)
endef

define KernelPackage/acpi-button/description
 Kernel module for ACPI Button support
endef

$(eval $(call KernelPackage,acpi-button))


define KernelPackage/keyboard-imx
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=IMX keypad support
  DEPENDS:=@(TARGET_mxs||TARGET_imx6) +kmod-input-matrixkmap
  KCONFIG:= \
	CONFIG_KEYBOARD_IMX \
	CONFIG_INPUT_KEYBOARD=y
  FILES:=$(LINUX_DIR)/drivers/input/keyboard/imx_keypad.ko
  AUTOLOAD:=$(call AutoProbe,imx_keypad)
endef

define KernelPackage/keyboard-imx/description
 Enable support for IMX keypad port.
endef

$(eval $(call KernelPackage,keyboard-imx))

define KernelPackage/input-uinput
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=user input module
  DEPENDS:=+kmod-input-core
  KCONFIG:= \
	CONFIG_INPUT_MISC=y \
	CONFIG_INPUT_UINPUT
  FILES:=$(LINUX_DIR)/drivers/input/misc/uinput.ko
  AUTOLOAD:=$(call AutoProbe,uinput)
endef

define KernelPackage/input-uinput/description
  user input modules needed for bluez
endef

$(eval $(call KernelPackage,input-uinput))

define KernelPackage/rc-core
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=rc-core
  DEPENDS:=+kmod-input-core +kmod-input-evdev 
  KCONFIG:=  CONFIG_MEDIA_SUPPORT \
			CONFIG_MEDIA_RC_SUPPORT=y  \
			CONFIG_RC_CORE
			
  FILES:=$(LINUX_DIR)/drivers/media/rc/rc-core.ko
  AUTOLOAD:=$(call AutoLoad,80,rc-core,1)
endef

define KernelPackage/rc-core/description
	rc-core
endef

$(eval $(call KernelPackage,rc-core))

define KernelPackage/rc_map
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=rc_map
  DEPENDS:=+kmod-rc-core
  KCONFIG:= CONFIG_RC_MAP
  FILES:=$(LINUX_DIR)/drivers/media/rc/keymaps/rc-lirc.ko
  AUTOLOAD:=$(call AutoLoad,81,rc-lirc,1)
endef

define KernelPackage/rc_map/description
	(Remote control) LIRC GPIO driver; Linux Version>3.4
endef

$(eval $(call KernelPackage,rc_map))

define KernelPackage/lirc_dev
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=lirc_dev
  DEPENDS:=+kmod-rc-core
  KCONFIG:=  CONFIG_LIRC
  FILES:=$(LINUX_DIR)/drivers/media/rc/lirc_dev.ko
  AUTOLOAD:=$(call AutoLoad,82,lirc_dev,1)
endef

define KernelPackage/lirc_dev/description
	lirc_dev
endef

$(eval $(call KernelPackage,lirc_dev))

define KernelPackage/ir-nec-decoder
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=ir-nec-decoder
  DEPENDS:=+kmod-lirc_dev
  KCONFIG:=  CONFIG_RC_DECODERS=y \
			CONFIG_IR_SANYO_DECODER=n \
			CONFIG_IR_MCE_KBD_DECODER=n \
			CONFIG_IR_NEC_DECODER
  FILES:=$(LINUX_DIR)/drivers/media/rc/ir-nec-decoder.ko
  AUTOLOAD:=$(call AutoLoad,83,ir-nec-decoder,1)
endef

define KernelPackage/ir-nec-decoder/description
	ir-nec-decoder
endef

$(eval $(call KernelPackage,ir-nec-decoder))

define KernelPackage/gpio-ir-recv
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=gpio-ir-recv (Remote control) LIRC GPIO driver
  DEPENDS:= +kmod-rc-core
  KCONFIG:= CONFIG_RC_DEVICES=y \
			CONFIG_IR_GPIO_CIR \
			CONFIG_RC_ATI_REMOTE  \
			CONFIG_IR_REDRAT3 \
			CONFIG_IR_IGUANA  \
			CONFIG_IR_TTUSBIR  \
			CONFIG_RC_LOOPBACK  

  FILES:=$(LINUX_DIR)/drivers/media/rc/gpio-ir-recv.ko
  AUTOLOAD:=$(call AutoLoad,84,gpio-ir-recv,1)
endef

define KernelPackage/gpio-ir-recv/description
	LIRC (Remote control) GPIO driver
endef
$(eval $(call KernelPackage,gpio-ir-recv))


define KernelPackage/mpr121
  SUBMENU:=$(INPUT_MODULES_MENU)
  TITLE:=Freescale MPR121 Touchkey
  DEPENDS:=kmod-i2c-core
  KCONFIG:=CONFIG_INPUT_KEYBOARD=y \
			CONFIG_KEYBOARD_MPR121
  FILES:=$(LINUX_DIR)/drivers/input/keyboard/mpr121_touchkey.ko
  AUTOLOAD:=$(call AutoLoad,95,mpr121_touchkey,1)
  $(call AddDepends/input)
endef

define KernelPackage/mpr121/description
 Freescale MPR121 Touchkey. I2C interface
endef

$(eval $(call KernelPackage,mpr121))
