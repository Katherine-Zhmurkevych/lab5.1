#include "pch.h"
#include "CppUnitTest.h"
#include "cmath"
#include "../lab 5.1/5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor5
{
	TEST_CLASS(UnitTestfor5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = h(2, 3);
			Assert::AreEqual(t, -5);
		}
	};
	
}
