#include "pch.h"
#include "CppUnitTest.h"
#include "../WeekPreparation/Exceptions.h"
#include "../WeekPreparation/IntArray.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace IntArrayTests
{
	TEST_CLASS(IntArrayTests)
	{
	public:
		TEST_METHOD(TestEmptyArray)
		{
			IntArray<int> intArray{};
			intArray.Size();
			Assert::IsTrue(intArray.IsEmpty());
		}

		TEST_METHOD(Test10elementsArray)
		{
			IntArray<int> b{ 10 };
			int size = b.Size();
			Assert::AreEqual(10, size);
			Assert::IsFalse(b.IsEmpty());
		}

		TEST_METHOD(ArrayElements)
		{

			try {
				IntArray<int> a{3};
				a[0] = 10;
				a[1] = 20;
				a[2] = 30;

				IntArray<int> b{3};
                b.MoveArray(std::move(a));

					for (int i = 0; i < a.Size(); i++) {
					Logger::WriteMessage(("a= " + std::to_string(a[i])).c_str());
				}

				for (int i = 0; i < b.Size(); i++) {
					Logger::WriteMessage(("b= " + std::to_string(b[i])).c_str());
				}

				b[1] = 100;
				Logger::WriteMessage("b[1] = 100");

				for (int i = 0; i < a.Size(); i++) {
					Logger::WriteMessage(("a= " + std::to_string(a[i])).c_str());
				}

				for (int i = 0; i < b.Size(); i++) {
					Logger::WriteMessage(("b= " + std::to_string(b[i])).c_str());
				}
                
			}
			catch (const IndexOutOfBoundsException e) {
				Logger::WriteMessage("Error invalid array index:");
			}
		}
	};
}