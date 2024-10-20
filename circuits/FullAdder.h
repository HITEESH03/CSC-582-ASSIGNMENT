#ifndef FULLADDER_H
#define FULLADDER_H

#include "HalfAdder.h"

class FullAdder {
public:
    // Method to calculate the sum with three inputs
    int calculateSum(int a, int b, int carryIn);

    // Method to calculate the final carry
    int calculateCarry(int a, int b, int carryIn);
};

#endif // FULLADDER_H
