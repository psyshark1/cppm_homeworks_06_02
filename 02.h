#pragma once
class Counter
{
public:
    Counter();
    Counter(const int& c_init);
    ~Counter();
    void add();
    void subtract();
    int return_counter();
private:
    int counter = 0;
};