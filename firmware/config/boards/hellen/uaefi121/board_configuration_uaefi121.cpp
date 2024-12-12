/**
 * See https://rusefi.com/s/uaefi121
 *
 * @author Andrey Belomutskiy, (c) 2012-2023
 */

#include "pch.h"
#include "defaults.h"
#include "hellen_meta.h"
#include "hellen_leds_100.cpp"

static void setupDefaultSensorInputs() {
	engineConfiguration->tps1_1AdcChannel = MM100_IN_TPS_ANALOG;
	engineConfiguration->tps1_2AdcChannel = MM100_IN_AUX1_ANALOG;
	engineConfiguration->map.sensor.hwChannel = MM100_IN_MAP1_ANALOG;

	setPPSInputs(MM100_IN_PPS_ANALOG, MM100_IN_AUX2_ANALOG);

	engineConfiguration->clt.adcChannel = MM100_IN_CLT_ANALOG;
	engineConfiguration->iat.adcChannel = MM100_IN_IAT_ANALOG;

	engineConfiguration->triggerInputPins[0] = Gpio::MM100_UART8_TX; // VR2 max9924 is the safer default
	engineConfiguration->camInputs[0] = Gpio::MM100_IN_D2; // HALL2
	engineConfiguration->camInputs[1] = Gpio::MM100_IN_D3; // HALL3

  engineConfiguration->vehicleSpeedSensorInputPin = Gpio::MM100_IN_D1;  // HALL1
}

void setBoardConfigOverrides() {
	setHellenMegaEnPin();
	setHellenVbatt();

	hellenMegaAccelerometerPreInitCS2Pin();
  engineConfiguration->isSdCardEnabled = true;
  engineConfiguration->sdCardCsPin = Gpio::H_SPI1_CS1;
	engineConfiguration->sdCardSpiDevice = SPI_DEVICE_1;
	engineConfiguration->spi1mosiPin = Gpio::A7; // not the usual H_SPI1_MOSI since that's CAN2RX
	engineConfiguration->spi1misoPin = Gpio::H_SPI1_MISO;
	engineConfiguration->spi1sckPin = Gpio::H_SPI1_SCK;
	engineConfiguration->is_enabled_spi_1 = true;
	setDefaultHellenAtPullUps();

	engineConfiguration->canTxPin = Gpio::B13;
	engineConfiguration->canRxPin = Gpio::B5;


}

void setBoardDefaultConfiguration() {
	// GM stepper: DC2 positive#4/negative#5 to pins A/B
  // DC1 positive#1/negative#2 to pin D/C
  setupTLE9201IncludingStepper(/*PWM controlPin*/Gpio::MM100_OUT_PWM3, Gpio::MM100_OUT_PWM4, Gpio::MM100_SPI2_MISO);
  setupTLE9201IncludingStepper(/*PWM controlPin*/Gpio::MM100_OUT_PWM5, Gpio::MM100_SPI2_MOSI, Gpio::MM100_USB1ID, 1);

  setHellenMMbaro();

  engineConfiguration->mainRelayPin = Gpio::MM100_IGN7;
  engineConfiguration->fuelPumpPin = Gpio::MM100_IGN8;

	// SPI3 for on-board EGT
	engineConfiguration->is_enabled_spi_3 = true;
	// MOSI not needed, we have one-way communication here
	engineConfiguration->spi3misoPin = Gpio::C11;
	engineConfiguration->spi3sckPin = Gpio::C10;
	engineConfiguration->max31855_cs[0] = Gpio::A15;
	engineConfiguration->max31855spiDevice = SPI_DEVICE_3;

		engineConfiguration->injectionPins[0] = Gpio::MM100_MEGA_UAEFI_INJ1;
  	engineConfiguration->injectionPins[1] = Gpio::MM100_INJ2;
  	engineConfiguration->injectionPins[2] = Gpio::MM100_INJ3;
  	engineConfiguration->injectionPins[3] = Gpio::MM100_INJ4;
  	engineConfiguration->injectionPins[4] = Gpio::MM100_INJ5;
  	engineConfiguration->injectionPins[5] = Gpio::MM100_INJ6;

	engineConfiguration->ignitionPins[0] = Gpio::MM100_IGN1;
	engineConfiguration->ignitionPins[1] = Gpio::MM100_IGN2;
	engineConfiguration->ignitionPins[2] = Gpio::MM100_IGN3;
	engineConfiguration->ignitionPins[3] = Gpio::MM100_IGN4;
	engineConfiguration->ignitionPins[4] = Gpio::MM100_IGN5;
	engineConfiguration->ignitionPins[5] = Gpio::MM100_IGN6;

    setupDefaultSensorInputs();
}

int getBoardMetaDcOutputsCount() {
    return 2;
}

static Gpio OUTPUTS[] = {
	Gpio::MM100_MEGA_UAEFI_INJ1, // 44a INJ_1
	Gpio::MM100_INJ2, // 45a INJ_2
	Gpio::MM100_INJ3, // 46a INJ_3
	Gpio::MM100_INJ4, // 47a INJ_4
	Gpio::MM100_INJ5, // 48a INJ_5
	Gpio::MM100_INJ6, // 49a INJ_6
	Gpio::MM100_SPI2_CS, // 50a INJ_7
	Gpio::MM100_MEGA_UAEFI_SPI2_SCK, // 51a INJ_8
	Gpio::MM100_INJ7, // 14a LS1
	Gpio::MM100_INJ8, // 15a LS2
	Gpio::MM100_OUT_PWM1, // 16a LS3
	Gpio::MM100_OUT_PWM2, // 88a LS4
	Gpio::MM100_IGN7, // 86a LS5_HOT
	Gpio::MM100_IGN8, // 87a LS6_HOT fuelpump
	Gpio::MM100_LED2_GREEN, // 43a High Side Output
	Gpio::MM100_IGN1, // Coil 1
	Gpio::MM100_IGN2, // Coil 2
	Gpio::MM100_IGN3, // Coil 3
	Gpio::MM100_IGN4, // Coil 4
	Gpio::MM100_IGN5, // Coil 5
	Gpio::MM100_IGN6, // Coil 6
};

static Gpio SBC_OUTPUTS[] = {
	Gpio::MM100_MEGA_UAEFI_INJ1, // 44a INJ_1
	Gpio::MM100_INJ2, // 45a INJ_2
	Gpio::MM100_INJ3, // 46a INJ_3
	Gpio::MM100_INJ4, // 47a INJ_4
	Gpio::MM100_INJ5, // 48a INJ_5
	Gpio::MM100_INJ6, // 49a INJ_6
	Gpio::MM100_SPI2_CS, // 50a INJ_7
	Gpio::MM100_MEGA_UAEFI_SPI2_SCK, // 51a INJ_8
  Gpio::MM100_IGN8, // 87a LS6_HOT fuelpump
	Gpio::MM100_IGN1, // Coil 1
	Gpio::MM100_IGN2, // Coil 2

};

int getBoardMetaOutputsCount() {
    if (engineConfiguration->engineType == engine_type_e::GM_SBC) {
        return efi::size(SBC_OUTPUTS);
    }
    return efi::size(OUTPUTS);
}

int getBoardMetaLowSideOutputsCount() {
    if (engineConfiguration->engineType == engine_type_e::GM_SBC) {
        return getBoardMetaOutputsCount() - 3;
    }
    return getBoardMetaOutputsCount() - 1 - 6;
}

Gpio* getBoardMetaOutputs() {
    if (engineConfiguration->engineType == engine_type_e::GM_SBC) {
        return SBC_OUTPUTS;
    }
    return OUTPUTS;
}
