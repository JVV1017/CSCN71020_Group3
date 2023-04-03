#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include "rectangleSolver.h"

double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void rectangleSolver() {
    int x1, y1, x2, y2, x3, y3, x4, y4;

    // Get the coordinates of the four points
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &x1) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &y1) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &x2) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &y2) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &x3) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points : ");
    if (scanf_s("%d", &y3) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            return 1;
     }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &x4) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    printf("Enter the coordinates of the four points: ");
    if (scanf_s("%d", &y4) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    // Determine the corners of the rectangle
    int left = x1, right = x1, top = y1, bottom = y1;
    if (x2 < left || (x2 == left && y2 < top)) {
        left = x2;
        top = y2;
    }
    if (x2 > right || (x2 == right && y2 > bottom)) {
        right = x2;
        bottom = y2;
    }
    if (x3 < left || (x3 == left && y3 < top)) {
        left = x3;
        top = y3;
    }
    if (x3 > right || (x3 == right && y3 > bottom)) {
        right = x3;
        bottom = y3;
    }
    if (x4 < left || (x4 == left && y4 < top)) {
        left = x4;
        top = y4;
    }
    if (x4 > right || (x4 == right && y4 > bottom)) {
        right = x4;
        bottom = y4;
    }

    // Check if the points form a rectangle
    double d1 = distance(x1, y1, x2, y2);
    double d2 = distance(x2, y2, x3, y3);
    double d3 = distance(x3, y3, x4, y4);
    double d4 = distance(x4, y4, x1, y1);
    if (d1 == d3 && d2 == d4) {
        printf("The points form a rectangle.\n");

        // Calculate and print the perimeter and area of the rectangle
        double perimeter = 2 * (d1 + d2);
        double area = d1 * d2;
        printf("Perimeter: %.2f\n", perimeter);
        printf("Area: %.2f\n", area);

       
    }
    else 
    {
        printf("The points do not form a rectangle.\n");
    }
}
