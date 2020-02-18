#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"
#include "loops.h"
#include "for_ranged.h"
#include <string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test sum of squares function")
{
	REQUIRE(sum_of_square(3) == 14);
	REQUIRE(sum_of_square(4) == 30);

}
TEST_CASE("Test value and ref function") {
	int num1 = 5, num2 = 10;
	
	pass_by_value_and_ref(num1, num2);

	REQUIRE(num1 == 5);
	REQUIRE(num2 == 50);

}
TEST_CASE("Veify your factorials")
{
	REQUIRE( )
}

TEST_CASE("Test for ranged loop by value")

{
	string name = "Joe";
	loop_string_w_auto(name);
	REQUIRE(name == "");


}
TEST_CASE("Test for ranged loop by regerence")

{
	string name = "Joe";
	loop_string_w_auto_ref(name);

	REQUIRE(name == "zzz");


}