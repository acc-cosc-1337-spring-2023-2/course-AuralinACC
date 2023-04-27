#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
/*
TEST_CASE("Test ref ptr params")
{
	int num1 = 1;
	int num2 = 2;
	ref_ptr_params(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);
}


TEST_CASE("overwrite existing vector with a value return vector function")
{
	Vector v(3);
	v = get_vector();
}

TEST_CASE("Test vector push back w capacity 3")
{
	Vector v(3);
	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 3);

	v.PushBack(5);
	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[0] == 5);

	v.PushBack(10);
	REQUIRE(v.Size() == 2);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[1] == 10);

	v.PushBack(7);
	REQUIRE(v.Size() == 3);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[2] == 7);

	v.PushBack(100);
	REQUIRE(v.Size() == 4);
	REQUIRE(v.Capacity() == 6);
	REQUIRE(v[3] == 100);
}*/

TEST_CASE("Test vector push back w capacity 0")
{
	Vector v;

	REQUIRE(v.Capacity() == 0);
	REQUIRE(v.Size() == 0);

	v.PushBack(5);
	REQUIRE(v.Capacity() == 8);
	REQUIRE(v.Size() == 1);
	REQUIRE(v[0] == 5);

}