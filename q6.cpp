#include <iostream>
using namespace std;

int main() {
    double resistorValue, totalResistance = 0.0;

    cout << "Series Resistor Calculator\n";
    for (int i = 1; i <= 5; ++i) {
        cout << "Enter resistance of resistor " << i << " (ohms): ";
        cin >> resistorValue;
        totalResistance += resistorValue;
    }

    cout << "Total resistance in series = " << totalResistance << " ohms\n";
    return 0;
}
