#include <catch.hpp>
#include "Franc.h"

TEST_CASE(
    "Franc::op*",
    "[small][Franc]")
{
    const money::Franc five(5);
    CHECK(money::Franc(10) == five * 2);
    CHECK(money::Franc(15) == five * 3);
}

TEST_CASE(
    "Franc::op==",
    "[small][Dollar]")
{
    CHECK(money::Franc(5) == money::Franc(5));
    CHECK(!(money::Franc(5) == money::Franc(6)));
}
