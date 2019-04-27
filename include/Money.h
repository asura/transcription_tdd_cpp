#ifndef MONEY_H_
#define MONEY_H_

namespace money
{
class Money
{
protected:
    int amount;

public:
    explicit Money(int amount);
    virtual ~Money() = 0;

    virtual bool operator==(const Money& other) const;
};
}
#endif /* !MONEY_H_ */
