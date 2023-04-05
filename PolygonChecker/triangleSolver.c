#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
#include "triangleSolver.h"
#include<math.h>
#define PI        3.14159265358979323846

// JoseVV, HaydenPB, JerinP, EvanTJ, HarshH - CSCN7102023W - Group Assignment - App Feature Development (Group - 3)

// This function will the show a menu of 2 options when the user inputted to go through the triangle option
int PrintTriangleMenu()
{

	printf_s("TRIANGLE SELECTED\n\n");
	printf_s("Select which kind of methond of input for a triangle\n");
	printf("1. Input side\n");
	printf("2. Input Coordinates\n");
	return 1;
}

// This function checks whether the three sides that was inputted by the user to form a triangle or not 
char* analyzeTriangle(double side1, double side2, double side3) 
{
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) 
	{
		printf("Not a triangle");
		exit(EXIT_FAILURE);
	}
	else if (side1 + side2 < side3 || side2 + side3 < side1 || side3 + side1 < side2) 
	{
		printf("Not a triangle");
		exit(EXIT_FAILURE);
	}
	else if (side1 == side2 && side1 == side3) 
	{
		result = "Equilateral triangle";
	}
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2))
	{
		result = "Isosceles triangle";
	}
	else {
		result = "Scalene triangle";
	}

	return result;
}




// This function calls other triangle functions to get three sides of a triangle and then these three points will be used to determine the type of triangles and its lengths.
void validateTriangleSides()
{
	double triangleSides[3];
	double* triangleSidesPtr = getTriangleSides(triangleSides);
	char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
	printf_s("%s\n", result);
	double a = triangleSidesPtr[0];
	double b = triangleSidesPtr[1];
	double c = triangleSidesPtr[2];
	triangleAngles(a, b, c);

}

// This function will get three sides of a traingle from the user
double* getTriangleSides(double* triangleSides) 
{
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%lf", &triangleSides[i]);
		
	}
	return triangleSides;
}

// This function takes the three doubles as input and calculates the angles of a triangle using the law of cosines
void triangleAngles(double a,double b,double c){ 

	double angleA = acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / PI);
	double angleB = acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / PI);
	double angleC = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / PI);

	printf("Angle A = %.2lf degrees\n", angleA);
	printf("Angle B = %.2lf degrees\n", angleB);
	printf("Angle C = %.2lf degrees\n", angleC);

}