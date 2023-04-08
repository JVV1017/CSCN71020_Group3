#include "pch.h"
#include "CppUnitTest.h"
 
extern "C" char* analyzeTriangle(double side1, double side2, double side3);
extern "C" void validateTriangleSides();
extern "C" double* getTriangleSides(double*);
extern "C" double* triangleAngles(double a, double b, double c);
extern "C" char* trianglecoordinates(double,double,double,double,double,double);
extern "C" double distance(double x1, double y1, double x2, double y2);
extern "C" char* rectangleSolver(double, double, double, double, double, double, double, double);
extern "C" double* getTriangleSides(double* triangleSides);
extern "C" double rectanglecorners(double top, double left, double right, double bottom);
extern "C" double perimeter(double d1, double d2);
extern "C" double area(double d1, double d2);

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

		

	};
	TEST_CLASS(HarshTesting) //Testing for Triangle inside angles
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			double a = 3.0;
			double b = 4.0;
			double c = 5.0;
			double expected[] = { 36.8699, 53.1301, 90.0 };
			double* result = triangleAngles(a, b, c);
			for (int i = 0; i < 3; i++) {
				Assert::AreNotEqual(expected[i], result[i]);
			}
		};
		TEST_METHOD(TestMethod2)
		{
			double a = 6;
			double b = 8;
			double c = 9;
			double* result = triangleAngles(a, b, c);
			Assert::AreNotEqual(40.80, result[0]);
			Assert::AreNotEqual(60.61, result[1]);
			Assert::AreNotEqual(78.58, result[2]);
		}
		TEST_METHOD(TestMethod3)
		{
			double a = 5;
			double b = 5;
			double c = 5;
			double* result = triangleAngles(a, b, c);
			Assert::AreNotEqual(60.0, result[0]);
			Assert::AreNotEqual(60.0, result[1]);
			Assert::AreNotEqual(60.0, result[2]);
		}

		
	};
	TEST_CLASS(EvanTesting) //Testing for Rectange using coordinates
	{
	public:
		TEST_METHOD(TestCase1)
		{
			double x1 = 0;
			double y1 = 0;
			double x2 = 0;
			double y2 = 5;
			double x3 = 5;
			double y3 = 5;
			double x4 = 5;
			double y4 = 0;

			char* actual = rectangleSolver(x1, y1, x2, y2, x3, y3, x4, y4);
			Assert::AreEqual("The points form a Rectangle", actual);

		};
		TEST_METHOD(TestCase2)
		{
			double x1 = 16;
			double y1 = 10;
			double x2 = 0;
			double y2 = 0;
			double x3 = 7;
			double y3 = 11;
			double x4 = 7;
			double y4 = 0;
			char* expected = "The points does not form a Rectangle";
			char* actual = rectangleSolver(x1, y1, x2, y2, x3, y3, x4, y4);
			Assert::AreEqual(expected, actual);
		};
		TEST_METHOD(TestCase3)
		{
			double x1 = -8.3;
			double y1 = -5.7;
			double x2 = -8.3;
			double y2 = -2.1;
			double x3 = -2.5;
			double y3 = -2.1;
			double x4 = -2.5;
			double y4 = -5.7;
			char* expected = "The points form a Rectangle";
			char* actual = rectangleSolver(x1, y1, x2, y2, x3, y3, x4, y4);
			Assert::AreEqual(expected, actual);
		};
		TEST_METHOD(TestCase4)
		{
			double x1 = 1.5;
			double y1 = -3.7;
			double x2 = -2.3;
			double y2 = 0.9;
			double x3 = -7.1;
			double y3 = -0.3;
			double x4 = -3.3;
			double y4 = -4.9;
			char* expected = "The points form a Rectangle";
			char* actual = rectangleSolver(x1, y1, x2, y2, x3, y3, x4, y4);
			Assert::AreEqual(expected, actual);
		};

	};
	TEST_CLASS(HaydenTesting) // Testing for Rectangle for area and perimeter
	{
	public:

		TEST_METHOD(TestCase1Perimeter)
		{
			double x1 = 0, y1 = 0, x2 = 0, y2 = 4, x3 = 3, y3 = 4, x4 = 3, y4 = 0;
			double top = 0.0, left = 0.0, right = 0.0, bottom = 0.0;
			rectanglecorners(top, left, right, bottom);
			double d1 = distance(x1, y1, x2, y2);
			double d2 = distance(x2, y2, x3, y3);
			double d3 = distance(x3, y3, x4, y4);
			double d4 = distance(x4, y4, x1, y1);
			double expected = 14;
			if (d1 == d3 && d2 == d4) 
			{
				double actual = perimeter(d1, d2);
				Assert::AreEqual(expected, actual);
			}

			
			
			
		}
		TEST_METHOD(TestCase1Area)
		{
			double x1 = -3.5, y1 = 2.1, x2 = -3.5, y2 = 6.3, x3 = 1.2, y3 = 6.3, x4 = 1.2, y4 = 2.1;
			double top = 0.0, left = 0.0, right = 0.0, bottom = 0.0;
			rectanglecorners(top, left, right, bottom);
			double d1 = distance(x1, y1, x2, y2);
			double d2 = distance(x2, y2, x3, y3);
			double d3 = distance(x3, y3, x4, y4);
			double d4 = distance(x4, y4, x1, y1);
			double expected = 19.74;
			if (d1 == d3 && d2 == d4)
			{
				double actual = area(d1, d2);
				Assert::AreEqual(expected, actual);
			}
		}
		TEST_METHOD(TestCase2Perimeter)
		{
			double x1 = -1, y1 = 2, x2 = -1, y2 = 7, x3 = 6, y3 = 7, x4 = 6, y4 = 2;
			double top = 0.0, left = 0.0, right = 0.0, bottom = 0.0;
			rectanglecorners(top, left, right, bottom);
			double d1 = distance(x1, y1, x2, y2);
			double d2 = distance(x2, y2, x3, y3);
			double d3 = distance(x3, y3, x4, y4);
			double d4 = distance(x4, y4, x1, y1);
			double expected = 24;
			if (d1 == d3 && d2 == d4)
			{
				double actual = perimeter(d1, d2);
				Assert::AreEqual(expected, actual);
			}
		}
		TEST_METHOD(TestCase2Area)
		{
			double x1 = -2.5, y1 = -2.5, x2 = -2.5, y2 = 2.5, x3 = 2.5, y3 = 2.5, x4 = 2.5, y4 = -2.5;
			double top = 0.0, left = 0.0, right = 0.0, bottom = 0.0;
			rectanglecorners(top, left, right, bottom);
			double d1 = distance(x1, y1, x2, y2);
			double d2 = distance(x2, y2, x3, y3);
			double d3 = distance(x3, y3, x4, y4);
			double d4 = distance(x4, y4, x1, y1);
			double expected = 25;
			if (d1 == d3 && d2 == d4)
			{
				double actual = area(d1, d2);
				Assert::AreEqual(expected, actual);
			}
		}

		
		
	};
	    
}
