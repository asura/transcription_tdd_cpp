#include <catch.hpp>
#include "Rate.h"

TEST_CASE(
    "Rate::find",
    "[small][Rate]")
{
    SECTION("存在しない変換ルールを指定")
    {
        money::Rate sut;
        money::Rate::FromTo unregistered(
            money::Currency("JPY"),
            money::Currency("USD"));
        const auto result = sut.find(unregistered);
        REQUIRE(!result.has_value());
    }
    SECTION("存在する変換ルールを指定")
    {
        money::Rate sut;
        money::Rate::FromTo registered(
            money::Currency("USD"),
            money::Currency("CHF"));
        sut.set(registered, 0.5);

        const auto result = sut.find(registered);
        REQUIRE(result.has_value());
        CHECK(*result == 0.5);
    }
}
