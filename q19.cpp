#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1')
            decimal += pow(2, power);
        power++;
    }

    return decimal;
}

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Decimal: " << decimal << endl;
    cout << "Hexadecimal: " << hex << uppercase << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}