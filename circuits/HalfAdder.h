#ifndef HALFADDER_H
#define HALFADDER_H

#include "ANDGate.h"
#include "ORGate.h"

class HalfAdder {
public:
    // Method that calculates the sum
    int calculateSum(int a, int b);

    // Method that calculates the carry
    int calculateCarry(int a, int b);
};

#endif // HALFADDER_H
