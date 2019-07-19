/*
 ============================================================================
 Name        : countoccurences.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Quadratic complexity program to count occurrences of values, COMP101101, Lecture 9
 ============================================================================
 */

/* Need to come back to this and fully understand */

#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void)
{
	int a[N];
	int unique_vals[N], counts[N];
	bool counted[N];
	int i, j, temp;
	int num_unique = 0;

	/* Assign the initial values to the array to check if a value has been seen before
	 * and the array to count the number of occurrences. Then read in array values.
	 */

	for (i = 0; i < N; i++)
		{
		counted[i] = false;
		counts[i] = 0;
		printf ("Input value for array position a[%d]: ", i);
		scanf ("%d", &a[i]);
		}

	printf ("\n\n");
	printf ("The initial values of array a[] are:\n\n");

	for (i = 0; i < N; i++)
		{
		printf ("%d ", a[i]);
		}

	for (i = 0; i < N; i++)
		{
		/* Store array value in temp */
		temp = a[i];
		/* Confirm boolean for whether this position of the array counted already is false */
		if (!counted[i])
			{
			/* Increase the count of the occurrences of this value */
			counts[num_unique] ++;
			/* Change the  boolean for whether counted already to true */
			counted[i] = true;

			/* Check the rest of the array for the same number */
			for (j = i + 1; j < N; j++)
				{
				if (a[j] == temp)
					{
					/* If so mark this position of the array as counted also*/
					counted[j] = true;
					/* Increase the count of the occurrences of this value */
					counts[num_unique] ++;
					}
				}

			/* Add the number to the num_unique'th place of unique_vals and then increment num_unique */
			unique_vals[num_unique++]=temp;
			}
		}

	/* Output the result */

	printf ("\n\n");

	for (i=0;i < num_unique; i++)
		{
		printf ("Value = %d Count = %d\n", unique_vals[i], counts[i]);
		}

	return 0;
}
