#include <catch.hpp>
#include "Bank.h"
#include "Rate.h"

TEST_CASE(
    "Bank::reduce",
    "[small][Bank]")
{
    const money::Currency chf("CHF");
    const money::Currency usd("USD");

    money::Rate rates;
    rates.set(chf, usd, 2);
    rates.set(usd, usd, 1);

    money::Bank bank;

    SECTION("単一の通貨の場合")
    {
        const auto two_francs = money::Money::franc(2);

        const auto result = bank.reduce(
            two_francs,
            usd,
            rates);

        CHECK(money::Money::dollar(1) == result);
    }
    SECTION("複数の通貨の場合")
    {
        const auto five_dollars = money::Money::dollar(5);
        const auto ten_francs = money::Money::franc(10);

        const auto result = bank.reduce(
            five_dollars + ten_francs,
            usd,
            rates);

        CHECK(money::Money::dollar(10) == result);
    }
}
