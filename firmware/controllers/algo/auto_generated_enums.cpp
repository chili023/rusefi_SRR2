#include "global.h"
#include "rusefi_hw_enums.h"
// was generated automatically by rusEFI tool  from rusefi_hw_enums.h // by enum_to_string.jar tool on Mon Aug 21 22:38:11 UTC 2023
// see also gen_config_and_enums.bat



const char *getGpio(Gpio value){
switch(value) {
case Gpio::A0:
  return "A0";
case Gpio::A1:
  return "A1";
case Gpio::A10:
  return "A10";
case Gpio::A11:
  return "A11";
case Gpio::A12:
  return "A12";
case Gpio::A13:
  return "A13";
case Gpio::A14:
  return "A14";
case Gpio::A15:
  return "A15";
case Gpio::A2:
  return "A2";
case Gpio::A3:
  return "A3";
case Gpio::A4:
  return "A4";
case Gpio::A5:
  return "A5";
case Gpio::A6:
  return "A6";
case Gpio::A7:
  return "A7";
case Gpio::A8:
  return "A8";
case Gpio::A9:
  return "A9";
case Gpio::B0:
  return "B0";
case Gpio::B1:
  return "B1";
case Gpio::B10:
  return "B10";
case Gpio::B11:
  return "B11";
case Gpio::B12:
  return "B12";
case Gpio::B13:
  return "B13";
case Gpio::B14:
  return "B14";
case Gpio::B15:
  return "B15";
case Gpio::B2:
  return "B2";
case Gpio::B3:
  return "B3";
case Gpio::B4:
  return "B4";
case Gpio::B5:
  return "B5";
case Gpio::B6:
  return "B6";
case Gpio::B7:
  return "B7";
case Gpio::B8:
  return "B8";
case Gpio::B9:
  return "B9";
case Gpio::C0:
  return "C0";
case Gpio::C1:
  return "C1";
case Gpio::C10:
  return "C10";
case Gpio::C11:
  return "C11";
case Gpio::C12:
  return "C12";
case Gpio::C13:
  return "C13";
case Gpio::C14:
  return "C14";
case Gpio::C15:
  return "C15";
case Gpio::C2:
  return "C2";
case Gpio::C3:
  return "C3";
case Gpio::C4:
  return "C4";
case Gpio::C5:
  return "C5";
case Gpio::C6:
  return "C6";
case Gpio::C7:
  return "C7";
case Gpio::C8:
  return "C8";
case Gpio::C9:
  return "C9";
case Gpio::CAN_PIN_0:
  return "CAN_PIN_0";
case Gpio::CAN_PIN_1:
  return "CAN_PIN_1";
case Gpio::CAN_PIN_2:
  return "CAN_PIN_2";
case Gpio::CAN_PIN_3:
  return "CAN_PIN_3";
case Gpio::CAN_PIN_4:
  return "CAN_PIN_4";
case Gpio::CAN_PIN_5:
  return "CAN_PIN_5";
case Gpio::CAN_PIN_6:
  return "CAN_PIN_6";
case Gpio::CAN_PIN_7:
  return "CAN_PIN_7";
case Gpio::D0:
  return "D0";
case Gpio::D1:
  return "D1";
case Gpio::D10:
  return "D10";
case Gpio::D11:
  return "D11";
case Gpio::D12:
  return "D12";
case Gpio::D13:
  return "D13";
case Gpio::D14:
  return "D14";
case Gpio::D15:
  return "D15";
case Gpio::D2:
  return "D2";
case Gpio::D3:
  return "D3";
case Gpio::D4:
  return "D4";
case Gpio::D5:
  return "D5";
case Gpio::D6:
  return "D6";
case Gpio::D7:
  return "D7";
case Gpio::D8:
  return "D8";
case Gpio::D9:
  return "D9";
case Gpio::E0:
  return "E0";
case Gpio::E1:
  return "E1";
case Gpio::E10:
  return "E10";
case Gpio::E11:
  return "E11";
case Gpio::E12:
  return "E12";
case Gpio::E13:
  return "E13";
case Gpio::E14:
  return "E14";
case Gpio::E15:
  return "E15";
case Gpio::E2:
  return "E2";
case Gpio::E3:
  return "E3";
case Gpio::E4:
  return "E4";
case Gpio::E5:
  return "E5";
case Gpio::E6:
  return "E6";
case Gpio::E7:
  return "E7";
case Gpio::E8:
  return "E8";
case Gpio::E9:
  return "E9";
case Gpio::F0:
  return "F0";
case Gpio::F1:
  return "F1";
case Gpio::F10:
  return "F10";
case Gpio::F11:
  return "F11";
case Gpio::F12:
  return "F12";
case Gpio::F13:
  return "F13";
case Gpio::F14:
  return "F14";
case Gpio::F15:
  return "F15";
case Gpio::F2:
  return "F2";
case Gpio::F3:
  return "F3";
case Gpio::F4:
  return "F4";
case Gpio::F5:
  return "F5";
case Gpio::F6:
  return "F6";
case Gpio::F7:
  return "F7";
case Gpio::F8:
  return "F8";
case Gpio::F9:
  return "F9";
case Gpio::G0:
  return "G0";
case Gpio::G1:
  return "G1";
case Gpio::G10:
  return "G10";
case Gpio::G11:
  return "G11";
case Gpio::G12:
  return "G12";
case Gpio::G13:
  return "G13";
case Gpio::G14:
  return "G14";
case Gpio::G15:
  return "G15";
case Gpio::G2:
  return "G2";
case Gpio::G3:
  return "G3";
case Gpio::G4:
  return "G4";
case Gpio::G5:
  return "G5";
case Gpio::G6:
  return "G6";
case Gpio::G7:
  return "G7";
case Gpio::G8:
  return "G8";
case Gpio::G9:
  return "G9";
case Gpio::H0:
  return "H0";
case Gpio::H1:
  return "H1";
case Gpio::H10:
  return "H10";
case Gpio::H11:
  return "H11";
case Gpio::H12:
  return "H12";
case Gpio::H13:
  return "H13";
case Gpio::H14:
  return "H14";
case Gpio::H15:
  return "H15";
case Gpio::H2:
  return "H2";
case Gpio::H3:
  return "H3";
case Gpio::H4:
  return "H4";
case Gpio::H5:
  return "H5";
case Gpio::H6:
  return "H6";
case Gpio::H7:
  return "H7";
case Gpio::H8:
  return "H8";
case Gpio::H9:
  return "H9";
case Gpio::I0:
  return "I0";
case Gpio::I1:
  return "I1";
case Gpio::I10:
  return "I10";
case Gpio::I11:
  return "I11";
case Gpio::I12:
  return "I12";
case Gpio::I13:
  return "I13";
case Gpio::I14:
  return "I14";
case Gpio::I15:
  return "I15";
case Gpio::I2:
  return "I2";
case Gpio::I3:
  return "I3";
case Gpio::I4:
  return "I4";
case Gpio::I5:
  return "I5";
case Gpio::I6:
  return "I6";
case Gpio::I7:
  return "I7";
case Gpio::I8:
  return "I8";
case Gpio::I9:
  return "I9";
case Gpio::Invalid:
  return "Invalid";
case Gpio::L9779_IGN_1:
  return "L9779_IGN_1";
case Gpio::L9779_IGN_2:
  return "L9779_IGN_2";
case Gpio::L9779_IGN_3:
  return "L9779_IGN_3";
case Gpio::L9779_IGN_4:
  return "L9779_IGN_4";
case Gpio::L9779_OUT_1:
  return "L9779_OUT_1";
case Gpio::L9779_OUT_10:
  return "L9779_OUT_10";
case Gpio::L9779_OUT_11:
  return "L9779_OUT_11";
case Gpio::L9779_OUT_12:
  return "L9779_OUT_12";
case Gpio::L9779_OUT_13:
  return "L9779_OUT_13";
case Gpio::L9779_OUT_14:
  return "L9779_OUT_14";
case Gpio::L9779_OUT_15:
  return "L9779_OUT_15";
case Gpio::L9779_OUT_16:
  return "L9779_OUT_16";
case Gpio::L9779_OUT_17:
  return "L9779_OUT_17";
case Gpio::L9779_OUT_18:
  return "L9779_OUT_18";
case Gpio::L9779_OUT_19:
  return "L9779_OUT_19";
case Gpio::L9779_OUT_2:
  return "L9779_OUT_2";
case Gpio::L9779_OUT_20:
  return "L9779_OUT_20";
case Gpio::L9779_OUT_25:
  return "L9779_OUT_25";
case Gpio::L9779_OUT_26:
  return "L9779_OUT_26";
case Gpio::L9779_OUT_27:
  return "L9779_OUT_27";
case Gpio::L9779_OUT_28:
  return "L9779_OUT_28";
case Gpio::L9779_OUT_3:
  return "L9779_OUT_3";
case Gpio::L9779_OUT_4:
  return "L9779_OUT_4";
case Gpio::L9779_OUT_5:
  return "L9779_OUT_5";
case Gpio::L9779_OUT_6:
  return "L9779_OUT_6";
case Gpio::L9779_OUT_7:
  return "L9779_OUT_7";
case Gpio::L9779_OUT_8:
  return "L9779_OUT_8";
case Gpio::L9779_OUT_9:
  return "L9779_OUT_9";
case Gpio::L9779_OUT_A:
  return "L9779_OUT_A";
case Gpio::L9779_OUT_B:
  return "L9779_OUT_B";
case Gpio::L9779_OUT_C:
  return "L9779_OUT_C";
case Gpio::L9779_OUT_D:
  return "L9779_OUT_D";
case Gpio::L9779_OUT_MRD:
  return "L9779_OUT_MRD";
case Gpio::L9779_PIN_KEY:
  return "L9779_PIN_KEY";
case Gpio::MC33972_PIN_1:
  return "MC33972_PIN_1";
case Gpio::MC33972_PIN_21:
  return "MC33972_PIN_21";
case Gpio::MC33972_PIN_22:
  return "MC33972_PIN_22";
case Gpio::PROTECTED_PIN_0:
  return "PROTECTED_PIN_0";
case Gpio::PROTECTED_PIN_1:
  return "PROTECTED_PIN_1";
case Gpio::PROTECTED_PIN_10:
  return "PROTECTED_PIN_10";
case Gpio::PROTECTED_PIN_11:
  return "PROTECTED_PIN_11";
case Gpio::PROTECTED_PIN_12:
  return "PROTECTED_PIN_12";
case Gpio::PROTECTED_PIN_13:
  return "PROTECTED_PIN_13";
case Gpio::PROTECTED_PIN_14:
  return "PROTECTED_PIN_14";
case Gpio::PROTECTED_PIN_15:
  return "PROTECTED_PIN_15";
case Gpio::PROTECTED_PIN_2:
  return "PROTECTED_PIN_2";
case Gpio::PROTECTED_PIN_3:
  return "PROTECTED_PIN_3";
case Gpio::PROTECTED_PIN_4:
  return "PROTECTED_PIN_4";
case Gpio::PROTECTED_PIN_5:
  return "PROTECTED_PIN_5";
case Gpio::PROTECTED_PIN_6:
  return "PROTECTED_PIN_6";
case Gpio::PROTECTED_PIN_7:
  return "PROTECTED_PIN_7";
case Gpio::PROTECTED_PIN_8:
  return "PROTECTED_PIN_8";
case Gpio::PROTECTED_PIN_9:
  return "PROTECTED_PIN_9";
case Gpio::TLE6240_PIN_1:
  return "TLE6240_PIN_1";
case Gpio::TLE6240_PIN_10:
  return "TLE6240_PIN_10";
case Gpio::TLE6240_PIN_11:
  return "TLE6240_PIN_11";
case Gpio::TLE6240_PIN_12:
  return "TLE6240_PIN_12";
case Gpio::TLE6240_PIN_13:
  return "TLE6240_PIN_13";
case Gpio::TLE6240_PIN_14:
  return "TLE6240_PIN_14";
case Gpio::TLE6240_PIN_15:
  return "TLE6240_PIN_15";
case Gpio::TLE6240_PIN_16:
  return "TLE6240_PIN_16";
case Gpio::TLE6240_PIN_2:
  return "TLE6240_PIN_2";
case Gpio::TLE6240_PIN_3:
  return "TLE6240_PIN_3";
case Gpio::TLE6240_PIN_4:
  return "TLE6240_PIN_4";
case Gpio::TLE6240_PIN_5:
  return "TLE6240_PIN_5";
case Gpio::TLE6240_PIN_6:
  return "TLE6240_PIN_6";
case Gpio::TLE6240_PIN_7:
  return "TLE6240_PIN_7";
case Gpio::TLE6240_PIN_8:
  return "TLE6240_PIN_8";
case Gpio::TLE6240_PIN_9:
  return "TLE6240_PIN_9";
case Gpio::TLE8888_PIN_1:
  return "TLE8888_PIN_1";
case Gpio::TLE8888_PIN_10:
  return "TLE8888_PIN_10";
case Gpio::TLE8888_PIN_11:
  return "TLE8888_PIN_11";
case Gpio::TLE8888_PIN_12:
  return "TLE8888_PIN_12";
case Gpio::TLE8888_PIN_13:
  return "TLE8888_PIN_13";
case Gpio::TLE8888_PIN_14:
  return "TLE8888_PIN_14";
case Gpio::TLE8888_PIN_15:
  return "TLE8888_PIN_15";
case Gpio::TLE8888_PIN_16:
  return "TLE8888_PIN_16";
case Gpio::TLE8888_PIN_17:
  return "TLE8888_PIN_17";
case Gpio::TLE8888_PIN_18:
  return "TLE8888_PIN_18";
case Gpio::TLE8888_PIN_19:
  return "TLE8888_PIN_19";
case Gpio::TLE8888_PIN_2:
  return "TLE8888_PIN_2";
case Gpio::TLE8888_PIN_20:
  return "TLE8888_PIN_20";
case Gpio::TLE8888_PIN_21:
  return "TLE8888_PIN_21";
case Gpio::TLE8888_PIN_22:
  return "TLE8888_PIN_22";
case Gpio::TLE8888_PIN_23:
  return "TLE8888_PIN_23";
case Gpio::TLE8888_PIN_24:
  return "TLE8888_PIN_24";
case Gpio::TLE8888_PIN_25:
  return "TLE8888_PIN_25";
case Gpio::TLE8888_PIN_26:
  return "TLE8888_PIN_26";
case Gpio::TLE8888_PIN_27:
  return "TLE8888_PIN_27";
case Gpio::TLE8888_PIN_28:
  return "TLE8888_PIN_28";
case Gpio::TLE8888_PIN_3:
  return "TLE8888_PIN_3";
case Gpio::TLE8888_PIN_4:
  return "TLE8888_PIN_4";
case Gpio::TLE8888_PIN_5:
  return "TLE8888_PIN_5";
case Gpio::TLE8888_PIN_6:
  return "TLE8888_PIN_6";
case Gpio::TLE8888_PIN_7:
  return "TLE8888_PIN_7";
case Gpio::TLE8888_PIN_8:
  return "TLE8888_PIN_8";
case Gpio::TLE8888_PIN_9:
  return "TLE8888_PIN_9";
case Gpio::TLE8888_PIN_KEY:
  return "TLE8888_PIN_KEY";
case Gpio::TLE8888_PIN_MR:
  return "TLE8888_PIN_MR";
case Gpio::TLE8888_PIN_WAKE:
  return "TLE8888_PIN_WAKE";
case Gpio::Unassigned:
  return "Unassigned";
  }
 return NULL;
}
const char *getAdc_channel_e(adc_channel_e value){
switch(value) {
case EFI_ADC_0:
  return "EFI_ADC_0";
case EFI_ADC_1:
  return "EFI_ADC_1";
case EFI_ADC_10:
  return "EFI_ADC_10";
case EFI_ADC_11:
  return "EFI_ADC_11";
case EFI_ADC_12:
  return "EFI_ADC_12";
case EFI_ADC_13:
  return "EFI_ADC_13";
case EFI_ADC_14:
  return "EFI_ADC_14";
case EFI_ADC_15:
  return "EFI_ADC_15";
case EFI_ADC_16:
  return "EFI_ADC_16";
case EFI_ADC_17:
  return "EFI_ADC_17";
case EFI_ADC_18:
  return "EFI_ADC_18";
case EFI_ADC_19:
  return "EFI_ADC_19";
case EFI_ADC_2:
  return "EFI_ADC_2";
case EFI_ADC_20:
  return "EFI_ADC_20";
case EFI_ADC_21:
  return "EFI_ADC_21";
case EFI_ADC_22:
  return "EFI_ADC_22";
case EFI_ADC_23:
  return "EFI_ADC_23";
case EFI_ADC_24:
  return "EFI_ADC_24";
case EFI_ADC_25:
  return "EFI_ADC_25";
case EFI_ADC_26:
  return "EFI_ADC_26";
case EFI_ADC_27:
  return "EFI_ADC_27";
case EFI_ADC_28:
  return "EFI_ADC_28";
case EFI_ADC_29:
  return "EFI_ADC_29";
case EFI_ADC_3:
  return "EFI_ADC_3";
case EFI_ADC_30:
  return "EFI_ADC_30";
case EFI_ADC_31:
  return "EFI_ADC_31";
case EFI_ADC_4:
  return "EFI_ADC_4";
case EFI_ADC_5:
  return "EFI_ADC_5";
case EFI_ADC_6:
  return "EFI_ADC_6";
case EFI_ADC_7:
  return "EFI_ADC_7";
case EFI_ADC_8:
  return "EFI_ADC_8";
case EFI_ADC_9:
  return "EFI_ADC_9";
case EFI_ADC_ERROR:
  return "EFI_ADC_ERROR";
case EFI_ADC_LAST_CHANNEL:
  return "EFI_ADC_LAST_CHANNEL";
case EFI_ADC_NONE:
  return "EFI_ADC_NONE";
  }
 return NULL;
}
