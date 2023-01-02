//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-8chan/connectors/8chan-A-B.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-8chan/connectors/8chan-C.yaml
// auto-generated by PinoutLogic.java based on config/boards/hellen/alphax-8chan/connectors/8chan-D.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::C13: return "13A - Ignition 1";
		case Gpio::D10: return "1A - Injector 4";
		case Gpio::D11: return "2A - Injector 3";
		case Gpio::E3: return "10A - Ignition 4";
		case Gpio::E4: return "11A - Ignition 3";
		case Gpio::E5: return "12A - Ignition 2";
		case Gpio::G12: return "8B - Main Relay LS";
		case Gpio::G7: return "4A - Injector 1";
		case Gpio::G8: return "3A - Injector 2";
		default: return nullptr;
	}
	return nullptr;
}
