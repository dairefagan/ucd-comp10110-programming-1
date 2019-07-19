/*
 ===========================================================================================
 Name        : multidimensionalarray.c
 Author      : Dáire Fagan
 Created on: : 28 Apr 2016
 Description : Program to demonstrate multidimensional arrays.
             : COMP10210, Lecture 6.
 ============================================================================================
 */

#include <stdio.h>

/* Function prototype */

void printArray(int a[][3]);

int main(void)
{
	int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
	puts("Values in array1 by row are:");
	printArray(array1);

	int array2[2][3] = {1, 2, 3, 4, 5};
	puts("Values in array2 by row are:");
	printArray(array2);

	int array3[2][3] = {{1, 2}, {4}};
	puts("Values in array3 by row are:");
	printArray(array3);

	return 0;
}

/* Function to output array with 2 rows and 3 columns */

void printArray(int a[][3])
{
	/* Loop through rows */
	for (size_t i = 0; i <= 1; i++)
		{

		/* Output values by column */

		for (size_t j = 0; j <= 2; j++)
			{
			printf ("%d ", a[i][j]);
			}

		printf ("\n");

		}
}
