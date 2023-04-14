#include "pch.h"
#include "CppUnitTest.h"
#include "../permutationsWithFixedPoints/permutationsWithFixedPoints.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestDerangement
{
	TEST_CLASS(TestDerangement)
	{
	public:

		TEST_METHOD(SampleTest)
		{
			int sizePermutation = 3;
			int expNumberDerangement = 2;

			int resultNumberDerangement = derangement(sizePermutation);
			Assert::AreEqual(expNumberDerangement, resultNumberDerangement);
		}

		TEST_METHOD(MinSizePermutation)
		{
			int sizePermutation = 1;
			int expNumberDerangement = 0;

			int resultNumberDerangement = derangement(sizePermutation);
			Assert::AreEqual(expNumberDerangement, resultNumberDerangement);
		}

		TEST_METHOD(MaxSizePermutation)
		{
			int sizePermutation = 9;
			int expNumberDerangement = 133496;

			int resultNumberDerangement = derangement(sizePermutation);
			Assert::AreEqual(expNumberDerangement, resultNumberDerangement);
		}

		TEST_METHOD(SizePermutationIsOne)
		{
			int sizePermutation = 1;
			int expNumberDerangement = 0;

			int resultNumberDerangement = derangement(sizePermutation);
			Assert::AreEqual(expNumberDerangement, resultNumberDerangement);
		}

		TEST_METHOD(NegativeSizePermutation)
		{
			int sizePermutation = -3;
			int expNumberDerangement = -1;

			int resultNumberDerangement = derangement(sizePermutation);
			Assert::AreEqual(expNumberDerangement, resultNumberDerangement);
		}
	};
}
