#ifndef BANK_H_
#define BANK_H_

#include "Currency.h"
#include "Money.h"
#include "Rate.h"

namespace money
{
class Bank
{
public:
    /// 通貨変換
    const Money reduce(const Money& source, const Currency& to, const Rate& rate) const
    {
        return source.reduce(to, rate);
    }
};
}

#endif /* !BANK_H_ */
