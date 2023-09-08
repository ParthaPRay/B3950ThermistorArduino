#ifndef B3950Thermistor_h
#define B3950Thermistor_h

#include "Arduino.h"

class B3950Thermistor {
public:
    B3950Thermistor(int pin);
    float getResistanceKOhms();
    float getTemperatureC();
    float getTemperatureF();
private:
    int _pin;
    float calculateTemperature(float R);
};

#endif

