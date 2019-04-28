#ifndef MONEY_H_
#define MONEY_H_

#include <iostream>
#include <unordered_map>
#include "Currency.h"

namespace money
{
/// 手持ちの貨幣
/// 複数の通貨があっても良い
class Money
{
protected:
    using amount_type = std::unordered_map<Currency, int, Currency::Hash>;

    amount_type m_amount;

public:
    Money()
    {
    }

    Money(int amount, const Currency& currency)
        : m_amount({{currency, amount}})
    {
    }

    bool operator==(const Money& other) const
    {
        if (m_amount.size() != other.m_amount.size())
        {
            // 通貨の種類が不一致
            return false;
        }

        for (const auto& item : m_amount)
        {
            const amount_type::const_iterator p = other.m_amount.find(item.first);
            if (p == other.m_amount.end())
            {
                // 相手が該当通貨を持っていない
                return false;
            }

            if (item.second != p->second)
            {
                // 通貨の量が不一致
                return false;
            }
        }

        return true;
    }

    const Money operator+(const Money& addend) const
    {
        Money result(*this);
        for (const auto& item : addend.m_amount)
        {
            result.add(item.second, item.first);
        }
        return result;
    }

    const Money operator*(int multiplier) const
    {
        Money result;
        for (const auto& item : m_amount)
        {
            result.add(item.second * multiplier, item.first);
        }
        return result;
    }

    static Money dollar(int amount)
    {
        return Money(amount, Currency("USD"));
    }

    static Money franc(int amount)
    {
        return Money(amount, Currency("CHF"));
    }

private:
    void add(int amount, const Currency& currency)
    {
        amount_type::iterator p = m_amount.find(currency);
        if (p != m_amount.end())
        {
            p->second += amount;
            return;
        }

        m_amount.insert({currency, amount});
    }
};
}

#endif /* !MONEY_H_ */
