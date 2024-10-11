#include "pch.h"
#include "CppUnitTest.h"
#include "../WeekPreparation/DiagonalDifference.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DiagonalDifferenceTest
{
	TEST_CLASS(DiagonalDifferenceTest)
	{
	public:

		DiagonalDifference diagonalDifference;  // Create an instance of DiagonalDifference

		// Test for a simple 2x2 matrix
		TEST_METHOD(Test2x2Matrix)
		{
			std::vector<std::vector<int>> a = { {1, 2}, {3, 4} };  // Diagonal difference is 0
			Assert::AreEqual(0, diagonalDifference.diagonalDifference(a));
		}

		// Test for a simple 3x3 matrix
		TEST_METHOD(Test3x3Matrix)
		{
			std::vector<std::vector<int>> a = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };  // Diagonal difference is 0
			Assert::AreEqual(0, diagonalDifference.diagonalDifference(a));
		}

		// Test for a simple 4x4 matrix
		TEST_METHOD(Test4x4Matrix)
		{
			std::vector<std::vector<int>> a = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };  // Diagonal difference is 0
			Assert::AreEqual(0, diagonalDifference.diagonalDifference(a));
		}
	};
}