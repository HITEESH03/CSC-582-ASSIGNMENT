#include "HalfAdder.h"

// Constructor definition
HalfAdder::HalfAdder() : sum(0), carry(0) {}

// Method to add two bits
void HalfAdder::add(int a, int b)
{
    sum = a ^ b;  // XOR operation for sum
    carry = a & b;  // AND operation for carry
}

// Getter for sum
int HalfAdder::getSum() const
{
    return sum;
}

// Getter for carry
int HalfAdder::getCarry() const
{
    return carry;
}
