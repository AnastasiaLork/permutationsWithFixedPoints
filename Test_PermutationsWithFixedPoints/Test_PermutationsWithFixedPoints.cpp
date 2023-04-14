#include "pch.h"
#include "CppUnitTest.h"
#include "../permutationsWithFixedPoints/permutationsWithFixedPoints.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestPermutationsWithFixedPoints
{
	TEST_CLASS(TestPermutationsWithFixedPoints)
	{
	public:

		TEST_METHOD(SampleTest)
		{
			int sizePermutation = 6;
			int numberOfPoints = 3;
			int expNumberPermutation = 40;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(MinSize_onePoint)
		{
			int sizePermutation = 1;
			int numberOfPoints = 1;
			int expNumberPermutation = 1;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(MinSize_noPoints)
		{
			int sizePermutation = 1;
			int numberOfPoints = 0;
			int expNumberPermutation = 0;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(MaxSize)
		{
			int sizePermutation = 9;
			int numberOfPoints = 3;
			int expNumberPermutation = 22260;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(MaxNumberPoints)
		{
			int sizePermutation = 6;
			int numberOfPoints = 6;
			int expNumberPermutation = 1;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(NoPoints)
		{
			int sizePermutation = 6;
			int numberOfPoints = 0;
			int expNumberPermutation = 265;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(NegativeSize)
		{
			int sizePermutation = 1;
			int numberOfPoints = 1;
			int expNumberPermutation = 1;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}


		TEST_METHOD(NegativeNumberPoints)
		{
			int sizePermutation = 1;
			int numberOfPoints = 1;
			int expNumberPermutation = 1;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}

		TEST_METHOD(NumberPointsMoreThanSize)
		{
			int sizePermutation = 1;
			int numberOfPoints = 1;
			int expNumberPermutation = 1;

			int resultNumberPermutation = permutationsWithFixedPoints(sizePermutation, numberOfPoints);
			Assert::AreEqual(expNumberPermutation, resultNumberPermutation);
		}
	};
}
