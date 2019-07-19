/*
 ============================================================================
 Name        : linearsearchpatternbreak.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Linear Search Pattern using break, COMP101101, Lecture 8
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#define N 100

int main(void)
{
	int a[N];
	int value;
	int index;
	int i;
	int c;
	bool found = false;

	printf("Input value to search for: ");
	scanf("%d", &value);

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
				found = true;
				break;
				}
			}

		printf("\ni is %d and index is %d\n", i, index);

		/* Using if(i < N) below will not find value 100, but if we use i <= N, and the same on the while loop above it will work */

		if (found)
			printf("\nValue found at position = %d\n", index);
		else
			printf("\nValue was not we found in the array.\n");
	return 0;
}
