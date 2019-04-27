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

    bool operator==(const Money& other) const;

    const Money operator+(const Money& addend) const;
    const Money operator*(int multiplier) const;

    static Money dollar(int amount);
    static Money franc(int amount);
};
}
#endif /* !MONEY_H_ */
