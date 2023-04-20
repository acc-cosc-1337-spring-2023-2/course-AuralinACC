#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test empty my vector size")
{
	Vector v(3);

	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity")
{
	Vector v(3);

	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test create Vector v1 from existing v")
{//looking at how class copy works
	Vector v(3);
	Vector v1 = v;

	REQUIRE(v1.Size() == v.Size());
	REQUIRE(v1.Capacity() == v.Capacity());
}