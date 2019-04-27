#include "Money.h"

money::Money::Money(
    int amount,
    const std::string& currency)
    : m_amount(amount)
    , m_currency(currency)
{
}

bool money::Money::operator==(const money::Money& other) const
{
    return (m_amount == other.m_amount) && (m_currency == other.m_currency);
}

const money::Money money::Money::operator+(const Money& addend) const
{
    return Money(m_amount + addend.m_amount, m_currency);
}

const money::Money money::Money::operator*(int multiplier) const
{
    return Money(m_amount * multiplier, m_currency);
}

money::Money money::Money::dollar(int amount)
{
    return Money(amount, "USD");
}

money::Money money::Money::franc(int amount)
{
    return Money(amount, "CHF");
}
