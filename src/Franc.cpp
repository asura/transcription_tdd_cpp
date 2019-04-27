#include "Franc.h"

money::Franc::Franc(int amount)
    : amount(amount)
{
}

bool money::Franc::operator==(const money::Franc& other) const
{
    return (amount == other.amount);
}

money::Franc money::Franc::operator*(int multiplier) const
{
    return Franc(amount * multiplier);
}
