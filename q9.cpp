#include <iostream>
using namespace std;

int main() {
    double current;

    cout << "Current Monitoring System\n";
    cout << "Enter current readings. Enter a value greater than 10 A to stop.\n";

    cout << "Enter current (A): ";
    cin >> current;

    while (current <= 10.0) {
        cout << "Safe current reading: " << current << " A\n";
        cout << "Enter current (A): ";
        cin >> current;
    }

    cout << "Overcurrent detected. Monitoring stopped.\n";
    return 0;
}
