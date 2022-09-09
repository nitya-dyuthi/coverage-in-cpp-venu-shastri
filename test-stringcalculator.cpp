#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"
#include "stdlib.h"
#include "string.h"


int add(string);

TEST_CASE("given empty string and zero is expected") {
  REQUIRE(add("") == 0);
}


//IMPLEMENTATION


int add(string str) {
  if(strlen(str) == 0)
    return 0;
  return 1;
}
