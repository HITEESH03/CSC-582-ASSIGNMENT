#include "FullAdder.h"

// Calculate the sum using two half adders
int FullAdder::calculateSum(int a, int b, int carryIn) {
    HalfAdder halfAdder;
    int sum1 = halfAdder.calculateSum(a, b);
    return halfAdder.calculateSum(sum1, carryIn);
}

// Calculate the final carry using two half adders
int FullAdder::calculateCarry(int a, int b, int carryIn) {
    HalfAdder halfAdder;
    int carry1 = halfAdder.calculateCarry(a, b);
    int carry2 = halfAdder.calculateCarry(halfAdder.calculateSum(a, b), carryIn);
    ORGate orGate;
    return orGate.OROperation(carry1, carry2);
}
