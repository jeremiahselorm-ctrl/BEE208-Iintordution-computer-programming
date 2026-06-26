#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, time, result;

    cout << "Power Rating Menu\n";
    cout << "1. Calculate DC Power\n";
    cout << "2. Calculate Resistance using Ohm's Law\n";
    cout << "3. Calculate Energy Consumption\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter voltage (V): ";
            cin >> voltage;
            cout << "Enter current (A): ";
            cin >> current;
            result = voltage * current;
            cout << "DC Power = " << result << " W\n";
            break;
        case 2:
            cout << "Enter voltage (V): ";
            cin >> voltage;
            cout << "Enter current (A): ";
            cin >> current;
            if (current != 0) {
                result = voltage / current;
                cout << "Resistance = " << result << " ohms\n";
            } else {
                cout << "Cannot calculate resistance: current must not be zero.\n";
            }
            break;
        case 3:
            cout << "Enter voltage (V): ";
            cin >> voltage;
            cout << "Enter current (A): ";
            cin >> current;
            cout << "Enter time (s): ";
            cin >> time;
            result = voltage * current * time;
            cout << "Energy Consumption = " << result << " joules\n";
            break;
        default:
            cout << "Invalid selection.\n";
            break;
    }

    return 0;
}
