#include "B3950Thermistor.h"

B3950Thermistor thermistor(A0);

void setup() {
    Serial.begin(9600);
}

void loop() {
    float resistance = thermistor.getResistanceKOhms();
    float tempC = thermistor.getTemperatureC();
    float tempF = thermistor.getTemperatureF();

    Serial.print("Resistance: ");
    Serial.print(resistance);
    Serial.print(" Kohms, Temperature: ");
    Serial.print(tempC);
    Serial.print(" C, ");
    Serial.print(tempF);
    Serial.println(" F");
    
    delay(1000);
}
