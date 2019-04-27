#include "Franc.h"

money::Franc::Franc(int amount)
    : Money(amount, "CHF")
{
}

money::Franc money::Franc::operator*(int multiplier) const
{
    return Franc(m_amount * multiplier);
}
