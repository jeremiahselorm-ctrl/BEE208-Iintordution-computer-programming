#include <iostream>
using namespace std;

int main() {
    double power, totalLoad = 0;

    while(totalLoad <= 3000) {
        cout << "Enter appliance power rating (W): ";
        cin >> power;

        totalLoad += power;

        if(totalLoad > 3000) {
            cout << "Load limit exceeded. Do not add more appliances.\n";
            break;
        }
    }

    cout << "Final Total Load = " << totalLoad << " W";

    return 0;
}