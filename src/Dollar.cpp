#include "Dollar.h"

money::Dollar::Dollar(int amount)
    : amount(amount)
{
}

void money::Dollar::times(int multiplier)
{
    amount *= multiplier;
}
