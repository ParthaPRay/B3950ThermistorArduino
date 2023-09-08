#ifndef B3950Thermistor_h
#define B3950Thermistor_h

#include "Arduino.h"

class B3950Thermistor {
public:
    B3950Thermistor(int pin, float seriesResistor, float vcc);
    
    float readResistanceKOhms();
    float readTemperatureCelsius();
    float readTemperatureFahrenheit();

private:
    int _pin;
    float _seriesResistor;
    float _vcc;

    float readThermistorResistance(int adcValue);
    float interpolateTemperature(float resistance);

    static const int numDataPoints = 241;
    static const float temperatureValues[numDataPoints];
    static const float resistanceValues[numDataPoints];
};

#endif

