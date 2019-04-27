#include "Franc.h"

money::Franc::Franc(int amount)
    : Money(amount)
{
}

money::Franc money::Franc::operator*(int multiplier) const
{
    return Franc(amount * multiplier);
}
