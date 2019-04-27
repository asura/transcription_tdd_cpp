#include "Dollar.h"

money::Dollar::Dollar(int amount)
    : Money(amount, "USD")
{
}

money::Dollar money::Dollar::operator*(int multiplier) const
{
    return Dollar(m_amount * multiplier);
}
