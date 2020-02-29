#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
#include<vector>
using std::vector;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);

}
// prime numbers tested 2, 4, 43, 44

TEST_CASE(" Verify if is_prime" ) {
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
}


//vector w values 3,8,1,99,1000
//vector w values 15, 12, 11, 99, 88
//vector w values 150, 120, 11, 990, 88888


TEST_CASE(" Verify if get_max_from_vector") {
	vector<int> vec1 = { 3, 8, 1, 99, 1000 };
	REQUIRE(get_get_max_from_vector(vec1) == 1000);

	vector<int> vec2 = { 15, 12, 11, 99, 88 };
    REQUIRE(get_get_max_from_vector(vec2) == 99);

	vector<int> vec3 = { 150, 120, 11, 990, 88888 };
	REQUIRE(get_get_max_from_vector(vec3) == 88888);
	
}

//10 vector with values 2, 3, 5, 7
//50 vector with values 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47

TEST_CASE("Verify vector_of_primes") {
	vector<int> assert1 = { 2, 3, 5, 7 };
	REQUIRE(vector_of_primes(10) == assert1);

	vector<int> assert2 = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(50) == assert2);


}
