#include <iostream>

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n % 2 == 0) {
        std::cout << n << " is even";
    } else {
        std::cout << n << " is odd";
    }

    return 0;
}
