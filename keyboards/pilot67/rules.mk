# MCU name
MCU = STM32F103

# Bootloader selection
BOOTLOADER = stm32duino


LTO_ENABLE = yes
BOOTMAGIC_ENABLE = yes	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes	# Mouse keys
EXTRAKEY_ENABLE = yes	# Audio control and System control
NKRO_ENABLE = yes	    # USB Nkey Rollover

CONSOLE_ENABLE = no	# Console for debug
COMMAND_ENABLE = no    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
BACKLIGHT_ENABLE = no
RGBLIGHT_ENABLE = no

# ENCODER_ENABLE = yes
# ENCODER_MAP_ENABLE = yes


HAPTIC_ENABLE = yes
HAPTIC_DRIVER += SOLENOID

AUDIO_ENABLE = yes
AUDIO_DRIVER = pwm_hardware
