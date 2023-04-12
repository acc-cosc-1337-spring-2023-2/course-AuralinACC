#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test array list capacity")
{
	const auto SIZE = 5;
	int numbers[SIZE];

	ArrayList array_list(numbers, SIZE);

	REQUIRE(array_list.Capacity() == 5);
}
TEST_CASE("Test array list size with empty list")
{
	const auto SIZE = 5;
	int numbers[SIZE];

	ArrayList array_list(numbers, SIZE);

	REQUIRE(array_list.Size() == 0);
}

TEST_CASE("Test array list size with added elements")
{
	const auto SIZE = 5;
	int numbers[SIZE];

	ArrayList array_list(numbers, SIZE);

	REQUIRE(array_list.Size() == 0);

	array_list.Add(7);
	REQUIRE(array_list.Size() == 1);
	array_list.Add(8);
	REQUIRE(array_list.Size() == 2);
}