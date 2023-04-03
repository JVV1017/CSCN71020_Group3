#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "rectangleSolver.h"
#include "main.h"
#include "triangleSolver.h"

int side = 0;

int main() {
	
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		case 2:
			printf_s("RECTANGLE SELECTED\n");
			rectangleSolver();
			break;

		case 1:
			PrintTriangleMenu();
	
			int inputchoice;
			printf("Enter your choice:");
			scanf_s("%1o", &inputchoice);
			if(inputchoice==1)
			{
				validateTriangleSides();
				
			}
	
			else if (inputchoice == 2)
			{
				trianglecoordinates();
			}
		
		case 0:
			continueProgram = false;
			break;
		default:
			
			printf("Invalid input entered.\n");
			break;
		}
		continueProgram = false;
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}



void PrintTriangleMenu() {

	printf_s("TRIANGLE SELECTED\n\n");
	printf_s("Select the input\n");
	printf("1. Input side\n");
	printf("2. Get Triangle angles\n");
	printf("3. Input Coordinates\n");
}