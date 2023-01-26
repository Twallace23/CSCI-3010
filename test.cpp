#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("Sum is computed", "[sum]"){
    std::vector<int> v{1,2,3,4,5};
    REQUIRE(Sum(v) == 15);
}
