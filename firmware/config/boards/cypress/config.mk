USE_PROCESS_STACKSIZE = 1536
USE_EXCEPTIONS_STACKSIZE = 4096

USE_FATFS = no
USE_BOOTLOADER = no
DEBUG_LEVEL_OPT= -O2

CYPRESS_CONTRIB = $(BOARD_DIR)/OS

GENERATED_ENUMS_DIR = $(BOARD_DIR)/config/controllers/algo

EXTRA_PARAMS += -DFIRMWARE_ID=\"cypress\"
DDEFS += -DSTATIC_BOARD_ID=STATIC_BOARD_ID_CYPRESS

# used by USE_SMART_BUILD
CONFDIR = $(BOARD_DIR)
