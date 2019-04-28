#ifndef RATE_H_
#define RATE_H_

#include <optional>
#include <unordered_map>
#include "Currency.h"

namespace money
{
class Rate
{
private:
    class FromTo
    {
    public:
        struct Hash
        {
            std::size_t operator()(const FromTo& object) const
            {
                return object.hash();
            }
        };

    private:
        const Currency m_from;
        const Currency m_to;

    public:
        FromTo(const Currency& from, const Currency& to)
            : m_from(from)
            , m_to(to)
        {
        }

        bool operator==(const FromTo& other) const
        {
            return (m_from == other.m_from) && (m_to == other.m_to);
        }

        std::size_t hash() const
        {
            Currency::Hash hash_fn;
            return (hash_fn(m_from) ^ hash_fn(m_to));
        }
    };

private:
    using rates_type = std::unordered_map<FromTo, double, FromTo::Hash>;

    rates_type m_rates;

public:
    /// 未設定なら追加、設定済みなら上書きする
    void set(const Currency& from, const Currency& to, double rate)
    {
        const FromTo from_to(from, to);

        rates_type::iterator p = m_rates.find(from_to);
        if (p == m_rates.end())
        {
            m_rates[from_to] = rate;
            return;
        }

        p->second = rate;
    }

    std::optional<double> find(const Currency& from, const Currency& to) const
    {
        const FromTo from_to(from, to);

        rates_type::const_iterator p = m_rates.find(from_to);
        if (p == m_rates.end())
        {
            return std::nullopt;
        }
        return p->second;
    }
};
}

#endif /* !RATE_H_ */
