#ifndef JULIO_LIB_WIND_DIRECTION_H
#define JULIO_LIB_WIND_DIRECTION_H

#include <Arduino.h>


class LibWindDirection {
public:
    LibWindDirection(int pin);
    int readWindDirection();
private:
    int pin;
};

#endif //JULIO_LIB_WIND_DIRECTION_H
