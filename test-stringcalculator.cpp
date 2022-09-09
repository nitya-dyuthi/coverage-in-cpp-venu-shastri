#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "typewise-alert.h"
#include "string"


int myadd(string);

TEST_CASE("given empty string and zero is expected") {
  REQUIRE(myadd("") == 0);
}


//IMPLEMENTATION


int myadd(string str) {
  if(strlen(str) == 0)
    return 0;
  return 1;
}
