#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 2.1/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.SetFirst(2);
			int test = a.GetFirst();
			Assert::AreEqual(test, 2);
		}
	};
}
