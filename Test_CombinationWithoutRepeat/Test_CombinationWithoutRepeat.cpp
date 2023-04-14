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

	};
}
