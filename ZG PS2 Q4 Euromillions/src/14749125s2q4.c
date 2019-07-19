/*
 ===========================================================================================
 Name        : 14749125s2q4.c
 Author      : Dáire Fagan
 Created on: : 27 Apr 2016
 Description : Program to simulate the Euromillions draw, selecting 5 random main numbers
             : between 1 and 50, and 2 Lucky Star numbers between 1 and 11.
             : COMP10210, Practical Set 2 Question 4.
 ============================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int c, i;
	int mainnumbers[5];
	int luckystars[2];

	/* To seed random number generator using value from time program started */

	srand(time(NULL));

	for (c = 0; c < 5; c++)
		{
		mainnumbers[c] = 1 + rand() % 50;
		}

	for (i = 0; i < 2; i++)
		{
		luckystars[i] = 1 + rand() % 11;
		}

	printf ("\n\nThe winning main numbers are:\n\n");

	for (c = 0; c < 5; c++)
		{
		printf ("%d ", mainnumbers[c]);
		}

	printf ("\n\nThe winning lucky star numbers are:\n\n");

	for (i = 0; i < 2; i++)
		{
		printf ("%d ", luckystars[i]);
		}

	return 0;
}
