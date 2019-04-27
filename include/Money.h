#ifndef MONEY_H_
#define MONEY_H_

namespace money
{
class Money
{
protected:
    int amount;

public:
    Money(int amount);

    bool operator==(const Money& other) const;
};
}
#endif /* !MONEY_H_ */
