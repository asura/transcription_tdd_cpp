#include "Money.h"
#include <typeinfo>  // typeid

money::Money::Money(
    int amount,
    const std::string& currency)
    : m_amount(amount)
    , m_currency(currency)
{
}

money::Money::~Money()
{
}

bool money::Money::operator==(const money::Money& other) const
{
    return (m_amount == other.m_amount) && (m_currency == other.m_currency);
}
