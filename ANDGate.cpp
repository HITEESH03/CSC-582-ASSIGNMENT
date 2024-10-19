#include "ANDGate.h"

// Constructor to initialize the inputs
ANDGate::ANDGate(bool in1, bool in2) : input1(in1), input2(in2) {}

// Function to compute the AND operation
bool ANDGate::compute() {
    return input1 && input2;  // AND operation
}
