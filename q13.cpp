##include <iostream>
using namespace std;

int main() {
    double voltage;

    for(int i = 1; i <= 10; i++) {
        cout << "Enter battery voltage " << i << ": ";
        cin >> voltage;

        if(voltage < 10.5) {
            cout << "Low battery detected. Test stopped.";
            break;
        }

        cout << "Battery voltage normal.\n";
    }

    return 0;
}