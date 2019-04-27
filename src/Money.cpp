#include "Money.h"
#include <typeinfo>  // typeid

money::Money::Money(int amount)
    : amount(amount)
{
}

money::Money::~Money()
{
}

bool money::Money::operator==(const money::Money& other) const
{
    return (amount == other.amount) && (typeid(*this) == typeid(other));
}
