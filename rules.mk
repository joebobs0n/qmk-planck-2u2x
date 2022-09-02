SRC += muse.c

# Build Options
#   change to "no" to disable the options, or define them in the makefile.mk in
#   the appropriate keymap folder that will get included automatically
#
AUTO_SHIFT_ENABLE = yes		# Allows shifting keys without SHIFT by holding
AUDIO_ENABLE = yes          # Audio output on port C6
NKRO_ENABLE = yes           # Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
EXTRAKEY_ENABLE = yes       # Audio control and System control(+450)

CONSOLE_ENABLE = no         # Console for debug(+400)
TAP_DANCE_ENABLE = no       # Enables the double-tap functionality of keys
CAPS_WORD_ENABLE = no
MOUSEKEY_ENABLE = no        # Mouse keys(+4700)
COMMAND_ENABLE = no         # Commands for debug and configuration
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
MIDI_ENABLE = no            # MIDI controls
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE = no        # Enable WS2812 RGB underlight.
