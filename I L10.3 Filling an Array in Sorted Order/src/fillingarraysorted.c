/*
 ============================================================================
 Name        : fillingarraysorted.c
 Author      : Dáire Fagan
 Created on: : 24 Apr 2016
 Description : Filling an Array in Sorted Order, COMP101101, Lecture 9
 ============================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void)
{
	int a[N];
	int i, j, v;

	for (i = 0; i < N; i++)
		{
		printf ("Input next number to place in the sorted array: ");
		/* Read in the next value from user */
		scanf ("%d", &v);
		/* Place value input to v initially at position i of the array */
		a[i] = v;

		/* I#1 v & a[0] = e.g. 5 */
		/* I#2 v & a[1] = e.g. 4 */
		/* I#3 v & a[2] = e.g. 6 */
		/* I#4 v & a[3] = e.g. 3 */

		/* Move values of array forward to create a gap into which to put v */

		j = i;

		/* I#1 j = i = 0  */
		/* I#2 j = i = 1 */
		/* I#3 j = i = 2 */
		/* I#4 j = i = 3 */


		/* I#1 while loop conditions not met, 0 !> 0  */
		/* I#2 while loop conditions are met, 1 > 0 & a[0] (5) > 4 */
		/* I#3 while loop conditions not met, 2 > 0 but a[1] (5) !> 6 */
		/* I#4 while loop conditions are met, 3 > 0 & a[2] (6) > 3 */
		/* i#4.1 while loop conditions - 2 > 0 & a[1] (4) > 3 */

		while (j > 0 && a[j - 1] > v)
			{
			/* I#2 a[1] (4) becomes a[0] (5) */
			/* I#4 a[3] (3) becomes a[2] (6) */
			/* I#4.1 a[2] (6) becomes a[1] (5) **** DOUBLE CHECK FROM I#4 ***** */
			a[j] = a[j - 1];
			j--;
			}

		/* I#1 a[0] = 5, which it was already */
		/* I#2 a[0] = 4  */
		/* I#3 a[2] = 6, which it was already */
		a[j] = v;
		}

	/* Output the array */

	for (i = 0; i < N; i++)
		{
		printf ("%d", a[i]);
		printf ("\n");
		}

	return 0;
}
