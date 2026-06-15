#include <iostream>
#include "controller.h"

using namespace std;

void Controller::processData(float soilMoisture, float temperature, float humidity) {
    cout << "Soil Moisture: " << soilMoisture << "%\n";
    cout << "Temperature: " << temperature << " C\n";
    cout << "Humidity: " << humidity << "%\n";

    if (soilMoisture < 40) {
        cout << "[ACTION] Irrigation ON\n";
    } else {
        cout << "[ACTION] Irrigation OFF\n";
    }
}







