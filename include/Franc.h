#ifndef FRANC_H_
#define FRANC_H_

#include "Money.h"

namespace money
{
class Franc : public Money
{
public:
    explicit Franc(int amount);

    Franc operator*(int multiplier) const;
};
}  // namespace money

#endif /* !FRANC_H_ */
