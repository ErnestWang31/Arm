#include "analog.hpp"

float Analog::GetChipTemperature() {
    // Read the temperature sensor
    return AdcGetChipTemperature();
}

