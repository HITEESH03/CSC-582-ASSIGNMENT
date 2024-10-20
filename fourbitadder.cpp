#include <iostream>
#include "FullAdder.h"

int main() {
    FullAdder fullAdder;

    int a[4], b[4], carryIn = 0, sum[4], carryOut;

    std::cout << "Enter 4-bit binary number A: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> a[i];
    }

    std::cout << "Enter 4-bit binary number B: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> b[i];
    }

    // Perform 4-bit addition
    for (int i = 0; i < 4; ++i) {
        sum[i] = fullAdder.calculateSum(a[i], b[i], carryIn);
        carryIn = fullAdder.calculateCarry(a[i], b[i], carryIn);
    }
    carryOut = carryIn;  // Final carry out

    std::cout << "Sum: ";
    for (int i = 3; i >= 0; --i) {
        std::cout << sum[i];
    }
    std::cout << "\nCarry Out: " << carryOut << std::endl;

    return 0;
}
