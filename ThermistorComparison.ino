// Comparison between B3950 and Generic NTC 10K Thermistor using B3950 Library
// Partha Pratim Ray
// September 8, 2023

/*
 * Put the Generic Themristor to Analog Pin 1 
 * Put the B3950 Thermistor to Analog Pin 0
 * 
 * 5V----> Thermistor---->10K Resistor------>GND
 *                        | 
 *                        | 
 *                      Analog Pin 
 */


#include "B3950Thermistor.h"

B3950Thermistor thermistor(A0, 10000.0, 5.0);


// ordinary 10K Thermistor 
int ThermistorPin = 1;
int Vo;
float R1 = 10000;
float logR2, R2, T, Tc, Tf;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;


void setup() {
    Serial.begin(9600);
    delay(1000);
}

void loop() {

//B3950 NTC 10K Theristor calculation
   
   
   float resistance = thermistor.readResistanceKOhms();
   float temperatureCelsius = thermistor.readTemperatureCelsius();
   float temperatureFahrenheit = thermistor.readTemperatureFahrenheit();
    
    Serial.print("B3950 Thermistor Resistance: ");
    Serial.print(resistance);
    Serial.print(" kOhms\tTemperature: ");
    Serial.print(temperatureCelsius);
    Serial.print(" °C\t");
    Serial.print(temperatureFahrenheit);
    Serial.println(" °F");



//Ordinary NTC 10K Theristor calculation

  Vo = analogRead(ThermistorPin);
  R2 = R1 * (1023.0 / (float)Vo - 1.0);
  logR2 = log(R2);
  T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2));
  Tc = T - 273.15;
  Tf = (Tc * 9.0)/ 5.0 + 32.0; 

    Serial.print("Generic Thermistor Resistance: ");
    Serial.print(R2/1000);  //Convert to KOhms
    Serial.print(" kOhms\tTemperature: ");
    Serial.print(Tc);
    Serial.print(" °C\t");
    Serial.print(Tf);
    Serial.println(" °F");
  
  delay(500);
    
}
