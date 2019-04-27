#ifndef MONEY_H_
#define MONEY_H_

#include <string>

namespace money
{
class Money
{
protected:
    int m_amount;
    std::string m_currency;

public:
    Money(int amount, const std::string& currency);
    virtual ~Money() = 0;

    virtual bool operator==(const Money& other) const;
};
}
#endif /* !MONEY_H_ */
