/*
 ============================================================================
 Name        : mindivisibleby3.c
 Author      : Dáire Fagan
 Created on: : 22 Apr 2016
 Description : Reduction pattern to find minimum number divisible by 3, COMP101101, Lecture 8
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#define N 100

int main(void)
{
	int a[N];
	int c, i, min;

	/* I added this for loop to initialise the array */

	for (c = 0; c < N; c++)
		{
		a[c] = c + 1;
		}

	bool found = false;


	for (i = 0; i < N; i++)
		{
		if (a[i] % 3 == 0 && (!found || a[i] < min))
			{
			min = a[i];
			found = true;
			}
		}

	printf("The minimum value in the array divisible by 3 is %d\n", min);

	return 0;
}

