#include "sensors.h"
#include <cstdlib>

float Sensors::readSoilMoisture() {
    return 30 + rand() % 40;
}

float Sensors::readTemperature() {
    return 20 + rand() % 15;
}

float Sensors::readHumidity() {
    return 40 + rand() % 30;
}

