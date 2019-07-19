/*
 ============================================================================
 Name        : nestedloop.c
 Author      : Dáire Fagan
 Created on: : 13 Apr 2016
 Description : Nested loop, COMP101101, Lecture 2
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int nstars = 1;

	/* Outer loop */
	while (nstars <= 10)
		{
		int stars = 1;
		/* Inner loop */
		while (stars <= nstars)
			{
			printf("*");
			stars++;
			}
		printf ("\n");
		nstars++;
		}

	return 0;
}
