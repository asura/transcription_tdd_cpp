#include <catch.hpp>
#include "Dollar.h"

TEST_CASE(
    "Dollar::op*",
    "[small][Dollar]")
{
    const money::Dollar five(5);
    CHECK(money::Dollar(10) == five * 2);
    CHECK(money::Dollar(15) == five * 3);
}

TEST_CASE(
    "Dollar::op==",
    "[small][Dollar]")
{
    CHECK(money::Dollar(5) == money::Dollar(5));
    CHECK(!(money::Dollar(5) == money::Dollar(6)));
}
