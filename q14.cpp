#include <iostream>
using namespace std;

int main() {
    double temp, total = 0;
    int validCount = 0;

    for(int i = 1; i <= 10; i++) {
        cout << "Enter temperature reading " << i << ": ";
        cin >> temp;

        if(temp < 0)
            continue;

        total += temp;
        validCount++;
    }

    if(validCount > 0)
        cout << "Average Temperature = "
             << total / validCount << " °C";
    else
        cout << "No valid readings entered.";

    return 0;
}