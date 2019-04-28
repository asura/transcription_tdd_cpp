#include <catch.hpp>
#include "Bank.h"
#include "Rate.h"

TEST_CASE(
    "Bank::reduce",
    "[small][Bank]")
{
    money::Rate rates;
    money::Rate::FromTo registered(
        money::Currency("CHF"),
        money::Currency("USD"));
    rates.set(registered, 2);

    money::Bank bank;

    const auto result = bank.reduce(
        money::Money::franc(2),
        money::Currency("USD"),
        rates);

    CHECK(money::Money::dollar(1) == result);
}
