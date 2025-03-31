#include <iostream>
using namespace std;

int main() {
    int x = 5;
    if(x > 0) {
        cout << "x is positive" << endl;
    } else if(x == 0) {
        cout << "x is zero" << endl;
    } else {
        cout << "x is negative" << endl;
    }
    return 0;
}
