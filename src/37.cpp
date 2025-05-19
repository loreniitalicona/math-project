#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                cout << "Even" << endl;
            } else {
                cout << "Odd" << endl;
            }
        }
    } else {
        cout << "Input value should be positive." << endl;
    }
    
    return 0;
}
