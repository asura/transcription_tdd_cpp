#ifndef DOLLAR_H_
#define DOLLAR_H_

namespace money
{
class Dollar
{
    int amount;

public:
    explicit Dollar(int amount);

    bool operator==(const Dollar& other) const;

    Dollar operator*(int multiplier) const;
};
}  // namespace money

#endif /* !DOLLAR_H_ */
