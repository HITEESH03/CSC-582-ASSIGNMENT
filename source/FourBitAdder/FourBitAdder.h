#ifndef FOURBITADDER_H
#define FOURBITADDER_H

#include "FullAdder.h"
#include "HalfAdder.h"

class FourBitAdder {
public:
    FourBitAdder();  // Constructor
    void add(int a, int b);  // Adds two 4-bit integers
    int getSum() const;  // Returns the final sum
    int getCarryOut() const;  // Returns the final carry out
private:
    FullAdder fullAdders[3];  // Three full adders for bits 1 to 3
    HalfAdder halfAdder;  // One half adder for bit 0
    int sum;  // Final 4-bit sum
    int carryOut;  // Final carry out
};

#endif // FOURBITADDER_H
