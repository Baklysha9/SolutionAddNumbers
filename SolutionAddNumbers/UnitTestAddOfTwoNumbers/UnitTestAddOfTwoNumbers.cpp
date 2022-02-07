#include "pch.h"
#include "CppUnitTest.h"
#include "../LibraryAddNumbers/LibraryAddNumbers.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestAddOfTwoNumbers
{
	TEST_CLASS(UnitTestAddOfTwoNumbers)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double par1 = 2.2;
			double par2 = 15;
			double result = 17.2;

			double actual = LibraryAddNumbers::SumNumber::Add(par1, par2);
			Assert::AreEqual(result, actual, 0.01);
		}
	};
}
