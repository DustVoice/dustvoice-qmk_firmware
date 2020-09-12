# Keys
CUSTOM_MATRIX = yes
NKRO_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
KEY_LOCK_ENABLE = no

# Other featues
BOOTMAGIC_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = yes
RAW_ENABLE = yes
MIDI_ENABLE = no
VIRTSER_ENABLE = no
COMBO_ENABLE = no

# ifeq ($(strip $(BOARD)), ANNEPRO2_C18)
# ANNEPRO2_EEPROM = yes
# endif

# ifeq ($(strip $(ANNEPRO2_EEPROM)), yes)
#     OPT_DEFS += -DANNEPRO2_EEPROM
#     SRC += spi_master.c eeprom_w25x20cl.c
# endif
