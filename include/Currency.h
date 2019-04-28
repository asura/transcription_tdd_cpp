#ifndef CURRENCY_H_
#define CURRENCY_H_

#include <string>  // string, hash

namespace money
{
/// 通貨の種類
class Currency
{
public:
    struct Hash
    {
        std::size_t operator()(const Currency& currency) const
        {
            std::hash<std::string> hash_fn;
            return hash_fn(currency.m_name);
        }
    };

private:
    const std::string m_name;  ///< 通貨名称

public:
    Currency() = delete;

    explicit Currency(const std::string& name)
        : m_name(name)
    {
    }

    bool operator==(const Currency& other) const
    {
        return m_name == other.m_name;
    }
};
}

#endif /* !CURRENCY_H_ */
