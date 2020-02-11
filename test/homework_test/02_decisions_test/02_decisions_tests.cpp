#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the calculate_gpa ") {

	REQUIRE(calculate_gpa) (12, 45) == 3.75);
	EQUIRE(calculate_gpa) (120, 390) == 3.25);
	EQUIRE(calculate_gpa) (120, 390) == 3.25);


}