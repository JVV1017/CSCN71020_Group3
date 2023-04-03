#include<stdio.h>
#include<math.h>
#include"triangleSolver.h"

char* trianglecoordinates() {
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;


    printf("Enter x coordinate of the first point:");
    while (scanf_s("%lf", &x1) != 1 || getchar() != '\n') {
        printf("Invalid input. Please enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("Enter y coordinate of the first point:");
    while (scanf_s("%lf", &y1) != 1 || getchar() != '\n') {
        printf("Invalid input. \nPlease enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("The Coordinates of the first point (%.2f,%.2f)\n",x1, y1);


    printf("Enter x coordinate of the second point:");
    while (scanf_s("%lf", &x2) != 1 || getchar() != '\n') {
        printf("Invalid input.\n Please enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("Enter y coordinate of the second point:");
    while (scanf_s("%lf", &y2) != 1 || getchar() != '\n') {
        printf("Invalid input. Please enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("The Coordinates of the second point (%.2lf,%.2lf)\n", x2, y2);


 
    printf("Enter x coordinate of the third point:");
    while (scanf_s("%lf", &x3) != 1 || getchar() != '\n') {
        printf("Invalid input.\n Please enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("Enter y coordinate of the third point:");
    while (scanf_s("%lf", &y3) != 1 || getchar() != '\n') {
        printf("Invalid input.\n Please enter a valid number:\n");
        while (getchar() != '\n'); // clear the input buffer
    }
    printf("The Coordinates of the third point (%.2lf,%.2lf)\n", x3, y3);


    double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2) * 1.0);
    double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2) * 1.0);

    char* result = analyzeTriangle(side1, side2, side3);
    printf("%s\n", result);

}