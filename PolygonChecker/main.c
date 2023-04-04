#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "rectangleSolver.h"
#include "main.h"
#include "triangleSolver.h"

int side = 0;

int main() 
{
	
	bool continueProgram = true;
	while (continueProgram) 
	{
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		

		case 1:
			PrintTriangleMenu();
	
			int inputchoice;
			printf("Enter your choice (1 or 2): ");
			if (scanf_s("%d", &inputchoice) != 1 || (inputchoice != 1 && inputchoice != 2)) 
			{
				printf("Invalid input. Please enter 1 or 2.\n");
				
			}
			else 
			{
				
				if (inputchoice == 1) 
				{
					validateTriangleSides();
				}
				else 
				{
					trianglecoordinates();
				}
			}
			return 0;

		case 2:
			printf_s("RECTANGLE SELECTED\n");
			rectangleSolver();
			break;
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

void printWelcome() 
{
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() 
{
	printf_s("1. Triangle\n");
	printf_s("2. Rectangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;

	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}



int PrintTriangleMenu() 
{

	printf_s("TRIANGLE SELECTED\n\n");
	printf_s("Select which kind of methond of input for a triangle\n");
	printf("1. Input side\n");
	printf("2. Input Coordinates\n");
	return 0;
}