#include <iostream>
using namespace std;

int main() {
    int choice;
    double voltage, current, time, power;

    cout << "Menu-Driven Electrical Calculator\n";
    do {
        cout << "\n";
        cout << "1. Calculate Power\n";
        cout << "2. Calculate Resistance\n";
        cout << "3. Calculate Energy\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter voltage (V): ";
                cin >> voltage;
                cout << "Enter current (A): ";
                cin >> current;
                power = voltage * current;
                cout << "Power = " << power << " W\n";
                break;
            case 2:
                cout << "Enter voltage (V): ";
                cin >> voltage;
                cout << "Enter current (A): ";
                cin >> current;
                if (current != 0) {
                    cout << "Resistance = " << voltage / current << " ohms\n";
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
                power = voltage * current;
                cout << "Energy = " << power * time << " joules\n";
                break;
            case 4:
                cout << "Exiting calculator.\n";
                break;
            default:
                cout << "Invalid selection.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
