#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Voltage Level Classifier\n";
    cout << "Enter the voltage reading (V): ";
    cin >> voltage;

    cout << "Voltage reading: " << voltage << " V\n";

    if (voltage < 0) {
        cout << "Invalid voltage reading.\n";
    } else if (voltage <= 50) {
        cout << "Low voltage.\n";
    } else if (voltage <= 240) {
        cout << "Normal voltage.\n";
    } else if (voltage <= 415) {
        cout << "High voltage.\n";
    } else {
        cout << "Dangerous voltage.\n";
    }

    return 0;
}
