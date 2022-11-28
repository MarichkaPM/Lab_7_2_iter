#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 7_2/Lab 7_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor72
{
	TEST_CLASS(UnitTestfor72)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int result;
			int imin_1 = 0;
			int jmin_1 = 0;
			int  mas [3][3] =
			{
				{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}
			};
			int minmin = mas[0][0];
			int* pa[3] = { mas[0], mas[1], mas[2] };
			result = Min(pa, 3, 3, minmin, imin_1, jmin_1);
			Assert::AreEqual(result, 1);
		}
	};
}
