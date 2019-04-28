#include <catch.hpp>
#include "Rate.h"

TEST_CASE(
    "Rate::find",
    "[small][Rate]")
{
    const money::Currency chf("CHF");
    const money::Currency jpy("JPY");
    const money::Currency usd("USD");

    SECTION("存在しない変換ルールを指定")
    {
        money::Rate sut;
        const auto result = sut.find(jpy, usd);
        REQUIRE(!result.has_value());
    }
    SECTION("存在する変換ルールを指定")
    {
        money::Rate sut;
        sut.set(usd, chf, 0.5);

        const auto result = sut.find(usd, chf);
        REQUIRE(result.has_value());
        CHECK(*result == 0.5);
    }
}
