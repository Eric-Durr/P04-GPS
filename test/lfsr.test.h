#include "../include/Catch2/catch.h"
#include "../include/lfsr.h"

SCENARIO("Testing the basic operations - Linear Feedback Shift Register")
{
  GIVEN("LFSR class object, an initial seed and one tap")
  {
    LFSR basic_stream("01011", std::vector<int>{0, 3});
    WHEN("No steps taken")
    {
      THEN("String returned as result is the same as the initial seed")
      {
        CHECK(basic_stream.to_string() == "01011");
      }
    }
    AND_WHEN("One step is taken")
    {
      int result = basic_stream.step();
      REQUIRE(result == 1);
      AND_THEN("Output expresses the seed plus the generated bit")
      {
        CHECK(basic_stream.to_string() == "010111");
      }
    }
    AND_WHEN("a 14 length output secuence is generated")
    {
      basic_stream.generate(14);
      THEN("The string increases by 14")
      {
        CHECK(basic_stream.to_string().size() == (5 + 14));
      }
      AND_THEN("Output expressees the full LFSR string")
      {
        CHECK(basic_stream.to_string() == "");
      }
      AND_THEN("State secuence expresses the 14 generated bits")
      {
        CHECK(basic_stream.generated_secuence().size() == 14);
        CHECK(basic_stream.generated_secuence() == "");
      }
    }
  }
}