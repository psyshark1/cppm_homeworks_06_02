#include "02.h"

Counter::Counter()
{
    this->counter = 1;
};
Counter::Counter(const int& c_init)
{
    this->counter = c_init;
};
void Counter::add()
{
    ++this->counter;
}
void Counter::subtract()
{
    --this->counter;
}
int Counter::return_counter()
{
    return Counter::counter;
}
Counter::~Counter()
{
};