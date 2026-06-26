#include <iostream>
using namespace std;

int main() {
    double gpa;

    cout << "Scholarship Eligibility for Engineering Student\n";
    cout << "Enter the student GPA: ";
    cin >> gpa;

    if (gpa >= 3.5) {
        cout << "Eligible for engineering scholarship.\n";
    } else {
        cout << "Not eligible for engineering scholarship.\n";
    }

    return 0;
}
