/*
 ============================================================================
 Name        : whileloop.c
 Author      : Dáire Fagan
 Created on: : 12 Apr 2016
 Description : While loop to add 10 numbers together, COMP101101, Lecture 6
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	/* Integer to store running total */
	int sum = 0;
	/* Running count on while loop */
	int count = 0;
	/* Integer to store number input before being added to running total */
	int num;

	while (count < 10)
		{
		printf("Enter the next number:");
		scanf("%d", &num);
		sum = sum + num;
		count = count +1;
		}
	printf("The sum of the numbers is %d\n", sum);

	return 0;
}
