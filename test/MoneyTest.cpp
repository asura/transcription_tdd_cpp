#include <catch.hpp>
#include "Dollar.h"
#include "Franc.h"

TEST_CASE(
    "DollarとFrancとの比較",
    "[small][Money]")
{
    CHECK(!(money::Dollar(5) == money::Franc(5)));
}
