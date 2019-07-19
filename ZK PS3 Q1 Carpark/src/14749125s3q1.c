/*
 ===========================================================================================
 Name        : 14749125s3q1.c
 Author      : Dáire Fagan
 Created on: : 27 Apr 2016
 Description : Program using 4 functions, to keep track of the number of cars in a car park
             : and the revenue generated, COMP10120, Practical 3, Question 1
 ============================================================================================
 */

#include <stdio.h>

/* Global variable to keep track of the number of cars in car park, as it is global I can
 * call it, and modify it, from anywhere in the program.
 */

int carsincarpark = 0;

/* Function prototypes */

void carenterscarpark();
void carexitscarpark();
void keeptrackofincome(int direction);
void reportnumberofcars();

int main(void)
{
	int direction;

	/* First update the user */

	reportnumberofcars();

	keeptrackofincome(direction);

	while (direction != 3)
		{

		printf ("Please input 1 if a car enters the carpark, 2 if a car exits, 3 to quit: ");
		scanf ("%d", &direction);

		switch (direction)
			{
			case 1:
				carenterscarpark();
				keeptrackofincome(direction);
				break;
			case 2:
				carexitscarpark();
				keeptrackofincome(direction);
				break;
			}
		}

	return 0;
}

/* Function for when a car enters car park */

void carenterscarpark()
{
	/* Increment the count on cars and output same to the user */

	++carsincarpark;
	reportnumberofcars();
}

/* Function for when a car exits car park */

void carexitscarpark()
{
	/* Decrement the count on cars and call the function to output same to the user */

	--carsincarpark;
	reportnumberofcars();
}

/* Function to keep track of income */

void keeptrackofincome(int direction)
{
	/* We use a static variable here so that the value is retained between calls */

	static int income = 0;

	if (direction == 1)
		{
		income += 2;
		printf ("Current income: €%d\n\n", income);
		}
	else
		{
		printf ("Current income: €%d\n\n", income);
		}
}

/* Function to output the number of cars currently in the car park */

void reportnumberofcars()
{
	printf ("\nThe number of cars currently in the car park is: %d\n\n", carsincarpark);
}




