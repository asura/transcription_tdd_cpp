#include <catch.hpp>
#include "Money.h"

TEST_CASE(
    "Money::op+",
    "[small][Money]")
{
    SECTION("ドルの演算")
    {
        const auto result = money::Money::dollar(5) + money::Money::dollar(5);
        CHECK(money::Money::dollar(10) == result);
    }
}

TEST_CASE(
    "Money::op*",
    "[small][Money]")
{
    SECTION("ドルの演算")
    {
        const auto five = money::Money::dollar(5);
        CHECK(money::Money::dollar(10) == five * 2);
        CHECK(money::Money::dollar(15) == five * 3);
    }
    SECTION("フランの演算")
    {
        const auto five = money::Money::franc(5);
        CHECK(money::Money::franc(10) == five * 2);
        CHECK(money::Money::franc(15) == five * 3);
    }
}

TEST_CASE(
    "Money::op==",
    "[small][Money]")
{
    SECTION("ドルどうしの比較")
    {
        CHECK(money::Money::dollar(5) == money::Money::dollar(5));
        CHECK(!(money::Money::dollar(5) == money::Money::dollar(6)));
    }
    SECTION("フランどうしの比較")
    {
        CHECK(money::Money::franc(5) == money::Money::franc(5));
        CHECK(!(money::Money::franc(5) == money::Money::franc(6)));
    }
    SECTION("DollarとFrancとの比較")
    {
        CHECK(!(money::Money::dollar(5) == money::Money::franc(5)));
    }
}
