/*
 ============================================================================
 Name        : reversingarray.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Reversing an Array, COMP101101, Lecture 9
 ============================================================================
 */

#include <stdio.h>
#define N 10

int main(void)
{
	int a[N], b[N];
	int i;

	/* Read the value of a[] from the console */

	for (i = 0; i < N; i++)
		{
		printf ("Please input value for position a[%d]: ", i);
		scanf ("%d", &a[i]);
		}

	printf ("\n\n");
	printf ("The initial values of array a[] are:\n\n");

	for (i = 0; i < N; i++)
		{
		printf ("%d ", a[i]);
		}

	/* Copy the values from a[] into b[] in reverse order */

	for (i = 0;i < N; i++)
		{
		/* First  iteration b[N - i - 1] equates to b[5 - 0 - 1] or b[4]
		 * Second iteration b[N - i - 1] equates to b[5 - 1 - 1] or b[3] */
		b[N - i - 1] = a[i];
		}

	printf ("\n\n");
	printf ("The same values copied to array b[] in reverse order are:\n\n");

	for (i = 0; i < N; i++)
		{
		printf ("%d ", b[i]);
		}

	/* Copy the values from b[] into a[] */

	for (i = 0; i < N; i++)
		{
		a[i] = b[i];
		}

	printf ("\n\n");
	printf ("After copying the reversed values back to a[] the new values there are:\n\n");

	for (i = 0; i < N; i++)
		{
		printf ("%d ", a[i]);
		}

	return 0;
}
