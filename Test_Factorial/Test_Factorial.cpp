#include "pch.h"
#include "CppUnitTest.h"
#include "../permutationsWithFixedPoints/permutationsWithFixedPoints.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestFactorial
{
	TEST_CLASS(TestFactorial)
	{
	public:

		TEST_METHOD(SampleTest)
		{
			int number = 4;
			int expFactorial = 24;

			int resultFactorial = factorial(number);
			Assert::AreEqual(expFactorial, resultFactorial);
		}

		TEST_METHOD(MinNumber)
		{
			int number = 0;
			int expFactorial = 1;

			int resultFactorial = factorial(number);
			Assert::AreEqual(expFactorial, resultFactorial);
		}

		TEST_METHOD(MaxNumber)
		{
			int number = 9;
			int expFactorial = 362880;

			int resultFactorial = factorial(number);
			Assert::AreEqual(expFactorial, resultFactorial);
		}

		TEST_METHOD(NumberIsOne)
		{
			int number = 1;
			int expFactorial = 1;

			int resultFactorial = factorial(number);
			Assert::AreEqual(expFactorial, resultFactorial);
		}

		TEST_METHOD(NegativeNumber)
		{
			int number = -4;
			int expFactorial = -1;

			int resultFactorial = factorial(number);
			Assert::AreEqual(expFactorial, resultFactorial);
		}
	};
}
