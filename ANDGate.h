#ifndef ANDGATE_H
#define ANDGATE_H

class ANDGate {
private:
    bool input1, input2;  // Two inputs for the AND gate

public:
    // Constructor to set inputs
    ANDGate(bool in1, bool in2);

    // Function to compute the AND of the inputs
    bool compute();
};

#endif
