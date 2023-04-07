#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "rectangleSolver.h"

// JoseVV, HaydenPB, JerinP, EvanTJ, HarshH - CSCN7102023W - Group Assignment - App Feature Development (Group - 3)

// The code to find the distance of 2 points with coordinates
double distance(double x1, double y1, double x2, double y2)
{
    double distance_value = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance_value;
}
double perimeter(double d1, double d2)
{
    double perimeter = 2 * (d1 + d2);
    printf("Perimeter of the Rectangle is : %lf\n", perimeter);
    return perimeter;
}

double area(double d1, double d2)
{
    double area = d1 * d2;
    printf("Area of the Rectangle is : %lf\n", area);
    return area;
}


char* rectangleinput()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    printf("Enter the coordinate point x1: ");
    if (scanf("%lf", &x1) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point y1: ");
    if (scanf("%lf", &y1) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point x2: ");
    if (scanf("%lf", &x2) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point y2: ");
    if (scanf("%lf", &y2) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point x3: ");
    if (scanf("%lf", &x3) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point y3: ");
    if (scanf("%lf", &y3) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 0;
    }
    printf("Enter the coordinate point x4: ");
    if (scanf("%lf", &x4 ) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        exit(1);
    }
    printf("Enter the coordinate point y4: ");
    if (scanf("%lf", &y4) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        exit(1);
    }
    double ArrayofInput[8] = { x1,y1,x2,y2,x3,y3,x4,y4 };
    return ArrayofInput;
}
double rectanglecorners(double top, double bottom, double right , double left) 
{
    double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, x3 = 0.0, x4 = 0.0, y3 = 0.0, y4 = 0.0;
    left = x1, right = x1, top = y1, bottom = y1;
    if (x2 < left || (x2 == left && y2 < top))
    {
        left = x2;
        top = y2;
    }
    if (x2 > right || (x2 == right && y2 > bottom))
    {
        right = x2;
        bottom = y2;
    }
    if (x3 < left || (x3 == left && y3 < top))
    {
        left = x3;
        top = y3;
    }
    if (x3 > right || (x3 == right && y3 > bottom))
    {
        right = x3;
        bottom = y3;
    }
    if (x4 < left || (x4 == left && y4 < top))
    {
        left = x4;
        top = y4;
    }
    if (x4 > right || (x4 == right && y4 > bottom))
    {
        right = x4;
        bottom = y4;
    }
    return 1;
}

// The code to get a user inputted coordinates to check whether they form a rectangle
char* rectangleSolver(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
  
    double rectanglecorners(double top, double bottom, double right, double left);

   
    double d1 = distance(x1, y1, x2, y2);
    double d2 = distance(x2, y2, x3, y3);
    double d3 = distance(x3, y3, x4, y4);
    double d4 = distance(x4, y4, x1, y1);
    if (d1 == d3 && d2 == d4)
    {
        perimeter(d1, d2);
        area(d1, d2);
        char* result = "The points form a Rectangle";
        printf("%s\n", result);
        return result;
        
    }
    else
    {
        char* result = "The points does not form a Rectangle";
        printf("%s\n", result);
        return result;
    }
}
