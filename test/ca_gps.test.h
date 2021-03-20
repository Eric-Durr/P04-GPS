#include "../include/Catch2/catch.h"
#include "../include/ca_gps.h"

SCENARIO("Testing C/A Generator with two vectors of 10 binary values")
{
  std::vector<int> gold_code_1(10, 1);
  std::vector<int> gold_code_2(10, 1);

  /* Checking that seed is 1 in all of the polynomial */

  GIVEN("The tap nº 1 (2 & 6)")
  {
    std::pair<int, int> taps = id_taps[PRN1];
    WHEN("Taken one step with each polynomial")
    {
      int result_g1 = step_g1(gold_code_1);
      THEN("Polynomial G1 rotates digits correctly and returns the 10th")
      {
        CHECK(to_string(gold_code_1) == "0111111111");
        CHECK(result_g1 == 1);
      }
      step_g2(gold_code_2);
      AND_THEN("Plynomial G2 rotates digits correctly")
      {
        CHECK(to_string(gold_code_2) == "0111111111");
      }
      int ca_code_first_value = ca_digit(result_g1, gold_code_2, taps);
      AND_THEN("First C/A code digit can be generated")
      {
        CHECK(ca_code_first_value == 1);
      }
    }
    AND_WHEN("Generating a full set of the CA secuence code by 14 rounds")
    {
      std::vector<int> result_code = generate(gold_code_1, gold_code_2, taps, 14);
      THEN("Both Gold codes are rotated by 15 steps")
      {
        CHECK(to_string(gold_code_1) == "1100100011");
        CHECK(to_string(gold_code_2) == "0101001011");
      }
      THEN("all the code matches the expected set of bits")
      {
        REQUIRE(to_string(result_code) == "11001000001110");
      }
    }
  }
}
