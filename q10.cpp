#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Battery Voltage Monitoring\n";
    cout << "Enter battery voltage readings. Enter a value below 12 V to stop.\n";

    cout << "Enter battery voltage (V): ";
    cin >> voltage;

    while (voltage >= 12.0) {
        cout << "Battery voltage normal: " << voltage << " V\n";
        cout << "Enter battery voltage (V): ";
        cin >> voltage;
    }

    cout << "Battery voltage low. Recharge required.\n";
    return 0;
}
