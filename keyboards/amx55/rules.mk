# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
#
LTO_ENABLE = yes
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
EXTRAKEY_ENABLE = yes       # Audio control and System control

MOUSEKEY_ENABLE = no        # Mouse keys
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no     # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no      # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output