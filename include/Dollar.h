#ifndef DOLLAR_H_
#define DOLLAR_H_

namespace money
{
class Dollar
{
public:
    int amount;

    explicit Dollar(int amount);

    void times(int multiplier);
};
}  // namespace money

#endif /* !DOLLAR_H_ */
