#include <iostream>
using namespace std;

int main() {
    double reading, totalVoltage = 0.0;
    const int numberOfReadings = 10;

    cout << "Average Voltage from Sensor Readings\n";
    for (int i = 1; i <= numberOfReadings; ++i) {
        cout << "Enter voltage reading " << i << " (V): ";
        cin >> reading;
        totalVoltage += reading;
    }

    double averageVoltage = totalVoltage / numberOfReadings;
    cout << "Average voltage = " << averageVoltage << " V\n";
    return 0;
}
