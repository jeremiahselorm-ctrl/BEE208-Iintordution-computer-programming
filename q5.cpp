#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    if (a > b)
        cout << "First value is greater" << endl;
    else
        cout << "Second value is greater" << endl;

    return 0;
}