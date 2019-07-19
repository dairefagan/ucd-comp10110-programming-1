/*
 ============================================================================
 Name        : forloop2.c
 Author      : Dáire Fagan
 Created on: : 12 Apr 2016
 Description : For loop to print out all even numbers i, such that 0 < i < 200, COMP10110, Lecture 7
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i, max = 200;

	for (i = 0; i < max; i += 2)
		{
		printf("%d\n", i);
		}

	printf("\n");
	return 0;
}
