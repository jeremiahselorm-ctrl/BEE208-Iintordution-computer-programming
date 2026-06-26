#include <iostream>
using namespace std;

int main() {
    double currentReading;
    int safeCount = 0;
    int unsafeCount = 0;

    cout << "Count Safe Current Readings\n";
    for (int i = 1; i <= 8; ++i) {
        cout << "Enter current reading " << i << " (A): ";
        cin >> currentReading;

        if (currentReading <= 10.0) {
            safeCount++;
        } else {
            unsafeCount++;
        }
    }

    cout << "Safe readings: " << safeCount << "\n";
    cout << "Unsafe readings: " << unsafeCount << "\n";
    return 0;
}
