#ifndef DOLLAR_H_
#define DOLLAR_H_

namespace money
{
class Dollar
{
public:
    int amount;

    explicit Dollar(int amount);

    Dollar operator*(int multiplier) const;
};
}  // namespace money

#endif /* !DOLLAR_H_ */
