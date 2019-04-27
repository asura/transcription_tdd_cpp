#include "Dollar.h"

money::Dollar::Dollar(int amount)
    : amount(amount)
{
}

money::Dollar money::Dollar::times(int multiplier) const
{
    return Dollar(amount * multiplier);
}
