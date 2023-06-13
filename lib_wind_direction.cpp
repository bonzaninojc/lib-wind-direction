#include "lib_wind_direction.h"


LibWindDirection::LibWindDirection(int pin) {
    this->pin = pin;
}

int LibWindDirection::readWindDirection() {
    return analogRead(this->pin);
}