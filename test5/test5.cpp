#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test5
{
	TEST_CLASS(test5)
	{
	public:
		
		TEST_METHOD(TestPowerPositiveExponent)
		{
			{
				Assert::AreEqual(8.0, power(2.0, 3), 0.001);
				Assert::AreEqual(0.25, power(2.0, -2), 0.001);
				Assert::AreEqual(1.0, power(2.0, 0), 0.001);
				Assert::AreEqual(-8.0, power(-2.0, 3), 0.001);
			}
		}
	};
}
