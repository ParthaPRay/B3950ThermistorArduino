#include "B3950Thermistor.h"

B3950Thermistor thermistor(A0, 10000.0, 5.0);

void setup() {
    Serial.begin(9600);
    delay(1000);
}

void loop() {
    float resistance = thermistor.readResistanceKOhms();
    float temperatureCelsius = thermistor.readTemperatureCelsius();
    float temperatureFahrenheit = thermistor.readTemperatureFahrenheit();
    
    Serial.print("Resistance: ");
    Serial.print(resistance);
    Serial.print(" kOhms\tTemperature: ");
    Serial.print(temperatureCelsius);
    Serial.print(" °C\t");
    Serial.print(temperatureFahrenheit);
    Serial.println(" °F");
    delay(500);
}

