#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/where.hpp"

TEST_CASE( "Test Find In" ) {

    // Testing Find Character
    
    // Canont test zero in char as '' doesnt work in C++
    REQUIRE(findInString("a", 'a') == 0);
    REQUIRE (findInString("Zero", 'e') == 1);
    REQUIRE (findInString("hello", "a") == -1);
    REQUIRE (findInString("", 'l') == -1);
    REQUIRE (findInString("aSdkljasJDLkaJdkollajLDKj", '_') == -1);

    // Testing Find Substring

    REQUIRE(findInString("", "") == -1);
    REQUIRE (findInString("a", "a") == 0);
    REQUIRE (findInString("Zero", "ro") == 2);
    REQUIRE (findInString("l", "ll") == -1);
    REQUIRE (findInString("hello", "lli") == -1);
    REQUIRE (findInString("aSdkljasJDLkaJdkollajLDKj", "JDL") == 8);

}
