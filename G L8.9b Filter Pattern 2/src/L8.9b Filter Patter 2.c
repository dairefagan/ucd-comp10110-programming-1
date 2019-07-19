/*
 ============================================================================
 Name        : filterpattern2.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Filter Pattern 2 where second array is smaller, COMP101101, Lecture 8
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#define N 100

int main(void)
{
	int a[N], b[N/2];
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
				/* Check if there is room in b[] first */
				if (j<N/2)
					{
					/* Place a[i] in the next available position in b[] and afterwards increment j */
					b[j++] = a[i];
					}
				else
					printf ("Array b[] is full. Cannot add any more values. \n");
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
