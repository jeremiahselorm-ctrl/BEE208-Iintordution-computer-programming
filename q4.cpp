#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Electrical Component Menu\n";
    cout << "1. Resistor\n";
    cout << "2. Capacitor\n";
    cout << "3. Diode\n";
    cout << "4. Transistor\n";
    cout << "5. LED\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Resistor: Used to limit current in a circuit.\n";
            break;
        case 2:
            cout << "Capacitor: Stores electrical energy in an electric field.\n";
            break;
        case 3:
            cout << "Diode: Allows current to flow in one direction only.\n";
            break;
        case 4:
            cout << "Transistor: Used as a switch or amplifier in circuits.\n";
            break;
        case 5:
            cout << "LED: Emits light when current passes through it.\n";
            break;
        default:
            cout << "Invalid selection.\n";
            break;
    }

    return 0;
}
