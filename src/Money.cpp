#include "Money.h"

money::Money::Money(int amount)
    : amount(amount)
{
}

bool money::Money::operator==(const money::Money& other) const
{
    return (amount == other.amount);
}
