# Combine the related files for a specific platform and MCU.

# Target ECU board design
BOARDCPPSRC = $(BOARD_DIR)/board_configuration.cpp
DDEFS += -DEFI_MAIN_RELAY_CONTROL=TRUE

# Add them all together
DDEFS += -DEFI_SOFTWARE_KNOCK=TRUE -DSTM32_ADC_USE_ADC3=TRUE

# MM176_GP9
DDEFS += -DADC_MUX_PIN=Gpio::F2

DDEFS += -DSTM32_ICU_USE_TIM1=TRUE -DSTM32_PWM_USE_TIM1=FALSE
DDEFS += -DEFI_SENT_SUPPORT=TRUE

LED_CRITICAL_ERROR_BRAIN_PIN = -DLED_CRITICAL_ERROR_BRAIN_PIN=H176_MCU_MEGA_LED1_RED
include $(BOARDS_DIR)/hellen/hellen-common176.mk

ifeq ($(PROJECT_CPU),ARCH_STM32F7)
	DDEFS += -DCH_DBG_ENABLE_ASSERTS=FALSE
	DDEFS += -DLUA_USER_HEAP=92000
	DDEFS += -DENABLE_PERF_TRACE=FALSE

	include $(PROJECT_DIR)/hw_layer/ports/stm32/2mb_flash.mk
else ifeq ($(PROJECT_CPU),ARCH_STM32F4)
    # This board has trigger scope hardware!
    DDEFS += -DTRIGGER_SCOPE
    # serial ports only on F4
	DDEFS += $(PRIMARY_COMMUNICATION_PORT_USART2)
else
$(error Unsupported PROJECT_CPU [$(PROJECT_CPU)])
endif
DDEFS += -DSTATIC_BOARD_ID=STATIC_BOARD_ID_ALPHAX_8CHAN

DDEFS += -DHW_HELLEN_8CHAN=1

ONBOARD_MEMS_TYPE=LIS2DH12
