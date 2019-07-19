/*
 ============================================================================
 Name        : sumreductionpattern.c
 Author      : Dáire Fagan
 Created on: : 13 Apr 2016
 Description : Reduction pattern to sum the first 100 numbers, COMP101101, Lecture 8
 ============================================================================
 */


#include <stdio.h>
#define N 100

int main(void)
{
	int a[N];
	int i, c;
	int sum;

	/* For sum we initialise with 0 */

	sum = 0;

	/* I added this for loop to initialise the array so the sum loop would be working with actual values. This also allows printing sum */

	for (c = 0; c < N; c++)
		{
		a[c] = c + 1;
		}

	for (i = 0; i < N; i++)
		{
		sum += a[i];
		}

	printf("%d\n", sum);

	return 0;
}
