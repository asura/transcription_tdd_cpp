#include <catch.hpp>

namespace money
{
class Dollar
{
public:
    int amount = 10;

    explicit Dollar(int amount)
    {
    }

    void times(int multiplier)
    {
    }
};
}  // namespace money

TEST_CASE(
    "$5*2=$10",
    "[small]")
{
    GIVEN("$5を用意する")
    {
        money::Dollar five(5);

        WHEN("2倍する")
        {
            five.times(2);

            THEN("$10になる")
            {
                CHECK(10 == five.amount);
            }
        }
    }
}
