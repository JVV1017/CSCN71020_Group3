#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(double side1, double side2, double side3);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double side1 = 5, side2 = 5, side3 = 5;
			char* result = analyzeTriangle(side1, side2, side3);
			char* expected = "Equilateral triangle";
			Assert::AreEqual(result, expected);
		}
	};
}
