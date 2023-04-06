#include "pch.h"
#include "CppUnitTest.h"
 
extern "C" char* analyzeTriangle(double side1, double side2, double side3);
extern "C" void validateTriangleSides();
extern "C" double* getTriangleSides(double*);
extern "C" double* triangleAngles(double a, double b, double c);
extern "C" int PrintTriangleMenu();
extern "C" char* trianglecoordinates(double,double,double,double,double,double);
extern "C" double distance(double x1, double y1, double x2, double y2);
extern "C" double rectangleSolver();
extern "C" void printWelcome();
extern "C" int printShapeMenu();
extern "C" double* getTriangleSides(double* triangleSides);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestSuitDevelopmentGroup3
{
	TEST_CLASS(JerinTesting) //Testing for Triangle using regular sides
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double side1 = 5;
			double side2 = 5;
			double side3 = 5;
			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual("Equilateral triangle", result);
		}
		TEST_METHOD(TestMethod2)
		{
			double side1 = 5;
			double side2 = 5;
			double side3 = 6;
			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual("Isosceles triangle", result);
		}
		TEST_METHOD(TestMethod3)
		{
			double side1 = 5;
			double side2 = 7;
			double side3 = 6;
			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual("Scalene triangle", result);
		}
		TEST_METHOD(TestMethod4)
		{
			double side1 = 0;
			double side2 = 0;
			double side3 = 0;
			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual("Not a triangle", result);
		}
		TEST_METHOD(TestMethod5)
		{
			double side1 = -5;
			double side2 = 5;
			double side3 = 9;
			char* result = analyzeTriangle(side1, side2, side3);
			Assert::AreEqual("Not a triangle", result);
		}

	};
	TEST_CLASS(JoseTesting) //Testing for Triangle using coordinates
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double x1 = 5;
			double y1 = 7;
			double x2 = 9;
			double y2 = 7;
			double x3 = 4;
			double y3 = 5;
			char* result = trianglecoordinates(x1, y1, x2, y2, x3, y3);
			Assert::AreEqual("Scalene triangle", result);

		}
		TEST_METHOD(TestMethod2)
		{
			double x1 = 0;
			double y1 = 0;
			double x2 = 2;
			double y2 = 3;
			double x3 = 4;
			double y3 = 0;
			char* result = trianglecoordinates(x1, y1, x2, y2, x3, y3);
			Assert::AreEqual("Isosceles triangle", result);
		}
		TEST_METHOD(TestMethod3)
		{
			double x1 = -4;
			double y1 = -5;
			double x2 = -5;
			double y2 = -10;
			double x3 = -8;
			double y3 = -4;
			char* result = trianglecoordinates(x1, y1, x2, y2, x3, y3);
			Assert::AreEqual("Scalene triangle", result);

		}

	};
	TEST_CLASS(HarshTesting) //Testing for Triangle inside angles
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double a = 5;
			double b = 5;
			double c = 5;
			double actual[3] = { 60.00,60.00,60.00 };
			double* result = triangleAngles(a, b, c);
			for (int i = 0; i < 3; i++)
				Assert::AreEqual(actual[i], result[i]);
		}
	};
	TEST_CLASS(HaydenTesting) // Testing for Rectangle for area and perimeter
	{
	public:

		TEST_METHOD(TestMethod1)
		{

		}
	};
	TEST_CLASS(EvanTesting) //Testing for Rectange using coordinates
	{
	public:

		TEST_METHOD(TestMethod1)
		{

		}
	};

}
