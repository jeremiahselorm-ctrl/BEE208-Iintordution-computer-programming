#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter a string: ";
    cin >> word;

    if (word == "hello")
        cout << "Hello!" << endl;
    else
        cout << "Goodbye!" << endl;

    return 0;
}