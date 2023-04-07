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

		

	};
	TEST_CLASS(JoseTesting) //Testing for Triangle using coordinates
	{
	public:

		

	};
	TEST_CLASS(HarshTesting) //Testing for Triangle inside angles
	{
	public:

		
	};
	TEST_CLASS(EvanTesting) //Testing for Rectange using coordinates
	{
	public:

		

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
