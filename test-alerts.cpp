#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"

TEST_CASE("infers the breach according to limits lower limit") {
  REQUIRE(inferBreach(12, 20, 30) == TOO_LOW);
}

TEST_CASE("infers the breach according to limits upper limit") {
  REQUIRE(inferBreach(31, 20, 30) == TOO_HIGH);
}

TEST_CASE("infers the breach according to limits normal") {
  REQUIRE(inferBreach(25, 20, 30) == TOO_HIGH);
}

TEST_CASE("check init upper limit for passive cooling") {
  REQUIRE(initUpperLimit(PASSIVE_COOLING) == 35);
}

TEST_CASE("check init upper limit for high active cooling") {
  REQUIRE(initUpperLimit(HI_ACTIVE_COOLING) == 45);
}

TEST_CASE("check init upper limit for medium active cooling") {
  REQUIRE(initUpperLimit(MED_ACTIVE_COOLING) == 40);
}
