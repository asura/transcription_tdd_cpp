#include <catch.hpp>
#include "Dollar.h"

TEST_CASE(
    "$5*2=$10",
    "[small][Dollar]")
{
    GIVEN("$5を用意する")
    {
        const money::Dollar five(5);

        WHEN("2倍する")
        {
            const auto product = five * 2;

            THEN("$10になる")
            {
                CHECK(10 == product.amount);
            }

            AND_WHEN("3倍する")
            {
                const auto another_product = five * 3;

                THEN("$15になる")
                {
                    CHECK(15 == another_product.amount);
                }
            }
        }
    }
}

TEST_CASE(
    "Dollar::op==",
    "[small][Dollar]")
{
    CHECK(money::Dollar(5) == money::Dollar(5));
    CHECK(!(money::Dollar(5) == money::Dollar(6)));
}
