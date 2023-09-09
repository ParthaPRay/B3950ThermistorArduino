# B3950ThermistorArduino
This repo contains B3950 NTC 10K Thermistor Library for Arduino.

The precision 10K thermistor is an inexpensive way to measure temperature in a small gap, or taped to a flat surface, it's only 0.2mm wide!
The resistance in 25°C is 10K (+- 1%). The resistance goes down as it gets warmer and goes up as it gets cooler. 


![266544465-6d6cd7ff-a7ee-479c-93df-40e90c82c24a](https://github.com/ParthaPRay/B3950ThermistorArduino/assets/1689639/38b09a4e-ec27-4ef6-8bb7-b58a4892aa91)




# Raw Code for B3950 for Arduino

**B3950_Raw.ino** file contains the raw code to measure resistance (kOhm), temperature (celcius and fahrenheit) as per the datasheet provided by Adafruit as mentioned in the temperature-to-resistance lookup table https://cdn-shop.adafruit.com/datasheets/103_3950_lookuptable.pdf

# Arduino Library for B3950

* B3950Thermistor Directory
  * B3950Thermistor.h
  * B3950Thermistor.cpp
  * B3950Example Directory
      * B3950Example.ino


# Thermistor Comaparison

**ThermistorComparison.ino** presents the thermistor comparison code between generic 10K NTC and B3950 10K NTC thermistors.
