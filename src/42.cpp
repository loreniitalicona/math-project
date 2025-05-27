#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        for (int i = 1; i <= n / 2; ++i) {
            cout << i << " ";
        }
    } else {
        for (int i = 1; i <= (n + 1) / 2 - 1; ++i) {
            cout << ((i == 1) ? "*" : " ") << i << " ";
        }
    }
    return 0;
}
