#ifndef HALFADDER_H
#define HALFADDER_H

class HalfAdder {
public:
    HalfAdder();  // Constructor
    void add(int a, int b);  // Adds two bits, no return
    int getSum() const;  // Getter for sum
    int getCarry() const;  // Getter for carry
private:
    int sum;
    int carry;
};

#endif // HALFADDER_H
