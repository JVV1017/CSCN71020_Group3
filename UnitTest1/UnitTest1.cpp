#include "pch.h"
#include "CppUnitTest.h"
 
extern "C" char* analyzeTriangle(double side1, double side2, double side3);
extern "C" void validateTriangleSides();
extern "C" double* getTriangleSides(double*);
extern "C" void triangleAngles(double a, double b, double c);
extern "C" int PrintTriangleMenu();
extern "C" char* trianglecoordinates();
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
			
		}
	};
	TEST_CLASS(JoseTesting) //Testing for Triangle using coordinates
	{
	public:

		TEST_METHOD(TestMethod1)
		{

		}
	};
	TEST_CLASS(HarshTesting) //Testing for Triangle inside angles
	{
	public:

		TEST_METHOD(TestMethod1)
		{

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
