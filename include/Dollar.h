#ifndef DOLLAR_H_
#define DOLLAR_H_

#include "Money.h"

namespace money
{
class Dollar : public Money
{
public:
    explicit Dollar(int amount);

    Dollar operator*(int multiplier) const;
};
}  // namespace money

#endif /* !DOLLAR_H_ */
