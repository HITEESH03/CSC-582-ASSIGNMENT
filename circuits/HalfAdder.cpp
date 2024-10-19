#include "HalfAdder.h"

// Calculate the sum using XOR (since it's a simple binary sum)
int HalfAdder::calculateSum(int a, int b) {
    return a ^ b;  // XOR operation for sum
}

// Calculate the carry using the AND gate
int HalfAdder::calculateCarry(int a, int b) {
    ANDGate andGate;
    return andGate.ANDOperation(a, b);
}
