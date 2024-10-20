#ifndef FULLADDER_H
#define FULLADDER_H

class FullAdder {
public:
    FullAdder();  // Constructor
    void add(int a, int b, int carryIn);  // Adds three bits, no return
    int getSum() const;  // Getter for sum
    int getCarryOut() const;  // Getter for carry out
private:
    int sum;
    int carryOut;
};

#endif // FULLADDER_H
