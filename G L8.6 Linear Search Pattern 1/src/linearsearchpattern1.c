/*
 ============================================================================
 Name        : linearsearchpattern1.c
 Author      : Dáire Fagan
 Created on: : 22 Apr 2016
 Description : Linear Search Pattern to find value, COMP101101, Lecture 8
 ============================================================================
 */

#include <stdio.h>
#define N 100

int main(void)
{
	int a[N];
	int value = 10;
	int index;
	int c, i, min;

		/* I added this for loop to initialise the array */

		for (c = 0; c < N; c++)
			{
			a[c] = c + 1;
			}

		for (i = 0; i < N; i++)
			{
			if (a[i] == value)
				{
				index = i; /* Returns the index at which the value was found */
				}
			}

		printf ("Value found at position = %d\n", index);

	return 0;
}
