/*
 ============================================================================
 Name        : filterpattern1.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Filter Pattern 1, COMP101101, Lecture 8
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#define N 100

int main(void)
{
	int a[N], b[N];
	int c, i, k;
	int j = 0;

		/* I added this for loop to initialise the array */

		for (c = 0; c < N; c++)
			{
			a[c] = c + 1;
			}

		printf ("Print values in the array greater than: ");
		scanf ("%d", &k);

		for (i = 0; i < N; i++)
			{
			if (a[i]>k)
				{
				/* Place a[i] in the next available position in b[] and afterwards increment j */
				b[j++] = a[i];
				}
			}

		/* Print the array b[] but not the last 5 positions as they contain no value. Using j which is 95 stops this */

		printf ("\n");

		for (i = 0; i < j; i++)
			{
			printf ("%d\n", b[i]);
			}



	return 0;
}
