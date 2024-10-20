#include "FourBitAdder.h"

// Constructor
FourBitAdder::FourBitAdder() : sum(0), carryOut(0) {}

// Method to add two 4-bit integers
void FourBitAdder::add(int a, int b) {
    // Bit 0 addition using HalfAdder
    int bitA = a & 1;  // Extract bit 0 of a
    int bitB = b & 1;  // Extract bit 0 of b
    halfAdder.add(bitA, bitB);
    sum = halfAdder.getSum();  // Set sum bit 0

    // Bit 1 to 3 addition using FullAdder
    int carryIn = halfAdder.getCarry();
    for (int i = 1; i < 4; ++i) {
        bitA = (a >> i) & 1;  // Extract bit i of a
        bitB = (b >> i) & 1;  // Extract bit i of b
        fullAdders[i - 1].add(bitA, bitB, carryIn);
        sum |= (fullAdders[i - 1].getSum() << i);  // Set sum bit i
        carryIn = fullAdders[i - 1].getCarryOut();
    }

    carryOut = carryIn;  // Set the final carry out
}

// Getter for the final sum
int FourBitAdder::getSum() const {
    return sum;
}

// Getter for the final carry out
int FourBitAdder::getCarryOut() const {
    return carryOut;
}
