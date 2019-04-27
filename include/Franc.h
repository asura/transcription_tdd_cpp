#ifndef FRANC_H_
#define FRANC_H_

namespace money
{
class Franc
{
    int amount;

public:
    explicit Franc(int amount);

    bool operator==(const Franc& other) const;

    Franc operator*(int multiplier) const;
};
}  // namespace money

#endif /* !FRANC_H_ */
