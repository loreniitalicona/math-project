#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    if (n % 2 == 0) {
        for (int i = 1; i <= n; i += 2)
            cout << i * i << " ";
        cout << endl;
    } else {
        for (int i = 1; i < n / 2 + 1; i += 2)
            cout << i * i + 1 << " "; 
        cout << endl;
    }
    
    return 0;
}
