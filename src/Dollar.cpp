#include "Dollar.h"

money::Dollar::Dollar(int amount)
    : Money(amount)
{
}

bool money::Dollar::operator==(const money::Dollar& other) const
{
    return (amount == other.amount);
}

money::Dollar money::Dollar::operator*(int multiplier) const
{
    return Dollar(amount * multiplier);
}
