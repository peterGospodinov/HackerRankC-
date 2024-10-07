#include "pch.h"
#include "CppUnitTest.h"
#include "../WeekPreparation/Lonelyinteger.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LonelyintegerTests
{
	TEST_CLASS(LonelyintegerTests)
	{
	public:

		Lonelyinteger lonelyFinder;  // Create an instance of Lonelyinteger

		// Test for a simple array with one lonely integer
		TEST_METHOD(TestSingleLonelyInteger)
		{
			std::vector<int> a = { 1, 1, 2 };  // 2 is the unique integer
			Assert::AreEqual(2, lonelyFinder.lonelyinteger(a));
		}

		// Test for a simple array with two lonely integers
		TEST_METHOD(TestTwoLonelyIntegers)
		{
			std::vector<int> a = { 1, 1, 2, 2, 3 };  // 3 is the unique integer
			Assert::AreEqual(3, lonelyFinder.lonelyinteger(a));
		}

		// Test for a simple array with three lonely integers	
		TEST_METHOD(TestThreeLonelyIntegers)
		{
			std::vector<int> a = { 1, 1, 2, 2, 3, 3, 4 };  // 4 is the unique integer
			Assert::AreEqual(4, lonelyFinder.lonelyinteger(a));
		}

		// Test for larger array with multiple duplicates
		TEST_METHOD(TestMultipleDuplicates)
		{
			std::vector<int> a = { 4, 9, 95, 93, 9, 4, 93 };  // 95 is the unique integer
			Assert::AreEqual(95, lonelyFinder.lonelyinteger(a));
		}

		// Test for array with negative numbers
		TEST_METHOD(TestNegativeNumbers)
		{
			std::vector<int> a = { -1, -1, -2, -3, -3 };  // -2 is the unique integer
			Assert::AreEqual(-2, lonelyFinder.lonelyinteger(a));
		}

		// Test for an array with only one element
		TEST_METHOD(TestSingleElement)
		{
			std::vector<int> a = { 42 };  // Only one element, so it's the unique integer
			Assert::AreEqual(42, lonelyFinder.lonelyinteger(a));
		}

		// Test for an empty array (optional, depending on your design)
		TEST_METHOD(TestEmptyArray)
		{
			std::vector<int> a = {};  // Edge case, no elements
			Assert::AreEqual(0, lonelyFinder.lonelyinteger(a));  // Assuming return 0 for empty input
		}
	};
}