#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0) {
        if (num1 == num2)
            cout << "The numbers are equal." << endl;
        else
            cout << "The numbers are not equal." << endl;
    } else if (num1 < 0 || num2 < 0) {
        if (num1 > 0 && num2 < 0)
            cout << "One number is negative and the other is positive." << endl;
        else
            cout << "Both numbers are not positive or both are not negative." << endl;
    } else if (num1 == 0 || num2 == 0) {
        cout << "The numbers are zero." << endl;
    }

    return 0;
}
