#include "pch.h"
#include "CppUnitTest.h"
#include "../WeekPreparation/PrimeNumberCheck.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PrimeNumberCheckTests
{
	TEST_CLASS(PrimeNumberCheckTests)
	{
	public:
		
		PrimeNumberCheck primeChecker;

		TEST_METHOD(TestBasicPrimes)
		{
			Assert::IsTrue(primeChecker.IsPrime(2));
			Assert::IsTrue(primeChecker.IsPrime(3));
			Assert::IsTrue(primeChecker.IsPrime(5));
			Assert::IsTrue(primeChecker.IsPrime(7));
			Assert::IsTrue(primeChecker.IsPrime(11));
			Assert::IsTrue(primeChecker.IsPrime(13));
		}

		TEST_METHOD(TestNonPrimes)
		{
			Assert::IsFalse(primeChecker.IsPrime(4));  // Divisible by 2
			Assert::IsFalse(primeChecker.IsPrime(6));  // Divisible by 2 and 3
			Assert::IsFalse(primeChecker.IsPrime(8));
			Assert::IsFalse(primeChecker.IsPrime(9));  // Divisible by 3
			Assert::IsFalse(primeChecker.IsPrime(10)); // Divisible by 2 and 5
		}

		TEST_METHOD(TestEdgeCases)
		{
			Assert::IsFalse(primeChecker.IsPrime(0));  // 0 is not prime
			Assert::IsFalse(primeChecker.IsPrime(1));  // 1 is not prime
			Assert::IsFalse(primeChecker.IsPrime(-1)); // Negative numbers are not prime
			Assert::IsFalse(primeChecker.IsPrime(-10));
		}

		TEST_METHOD(TestLargerNumbers)
		{
			Assert::IsTrue(primeChecker.IsPrime(29));   // Prime number
			Assert::IsTrue(primeChecker.IsPrime(31));   // Prime number
			Assert::IsTrue(primeChecker.IsPrime(37));   // Prime number
			Assert::IsFalse(primeChecker.IsPrime(100)); // Non-prime number
			Assert::IsTrue(primeChecker.IsPrime(97));   // Prime number
		}
	};
}
