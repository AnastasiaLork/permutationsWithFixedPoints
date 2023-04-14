#include "pch.h"
#include "CppUnitTest.h"
#include "../permutationsWithFixedPoints/permutationsWithFixedPoints.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCombinationWithoutRepeat
{
	TEST_CLASS(TestCombinationWithoutRepeat)
	{
	public:

		TEST_METHOD(SampleTest)
		{
			int setOfElements = 6;
			int numberSelectedElements = 3;
			int expNumberCombination = 20;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(MinSet_OneSelectedElement)
		{
			int setOfElements = 1;
			int numberSelectedElements = 1;
			int expNumberCombination = 1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(MinSet_ZeroSelectedElements)
		{
			int setOfElements = 1;
			int numberSelectedElements = 0;
			int expNumberCombination = 1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(MaxSet)
		{
			int setOfElements = 9;
			int numberSelectedElements = 3;
			int expNumberCombination = 84;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(MaxNumberSelectedElements)
		{
			int setOfElements = 6;
			int numberSelectedElements = 6;
			int expNumberCombination = 1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(NoSelectedElements)
		{
			int setOfElements = 6;
			int numberSelectedElements = 0;
			int expNumberCombination = 1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(NegativeSet)
		{
			int setOfElements = -6;
			int numberSelectedElements = 3;
			int expNumberCombination = -1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(NegativeNumberSelectedElement)
		{
			int setOfElements = 6;
			int numberSelectedElements = -3;
			int expNumberCombination = -1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}

		TEST_METHOD(NumberSelectedElementMoreThanSet)
		{
			int setOfElements = 6;
			int numberSelectedElements = 9;
			int expNumberCombination = -1;

			int resultNumberCombination = combinationWithoutRepeat(setOfElements, numberSelectedElements);
			Assert::AreEqual(expNumberCombination, resultNumberCombination);
		}
	};
}
