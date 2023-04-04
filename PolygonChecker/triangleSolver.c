#include <stdio.h>
#include <stdbool.h>
#include "triangleSolver.h"
#include<math.h>
#define PI        3.14159265358979323846

char* analyzeTriangle(double side1, double side2, double side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 + side2 < side3 || side2 + side3 < side1 || side3 + side1 < side2) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
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

double* getTriangleSides(double* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		printf("Enter Side %d", i);
		scanf_s("%lf", &triangleSides[i]);
		
	}
	return triangleSides;
}

void triangleAngles(double a,double b,double c){ 

	double angleA = acos((b * b + c * c - a * a) / (2 * b * c)) * (180 / PI);
	double angleB = acos((a * a + c * c - b * b) / (2 * a * c)) * (180 / PI);
	double angleC = acos((a * a + b * b - c * c) / (2 * a * b)) * (180 / PI);

	printf("Angle A = %lf degrees\n", angleA);
	printf("Angle B = %lf degrees\n", angleB);
	printf("Angle C = %lf degrees\n", angleC);

}