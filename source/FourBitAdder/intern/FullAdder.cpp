#include "FullAdder.h"

// Constructor definition
FullAdder::FullAdder() : sum(0), carryOut(0) {}

// Method to add three bits
void FullAdder::add(int a, int b, int carryIn) {
    sum = a ^ b ^ carryIn;  // XOR for sum
    carryOut = (a & b) | (b & carryIn) | (a & carryIn);  // OR for carry out
}

// Getter for sum
int FullAdder::getSum() const {
    return sum;
}

// Getter for carry out
int FullAdder::getCarryOut() const {
    return carryOut;
}
