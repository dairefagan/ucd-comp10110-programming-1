/*
 ============================================================================
 Name        : factorial2.c
 Author      : Dáire Fagan
 Created on: : 12 Apr 2016
 Description : Factorial using for loop, COMP101101, Lecture 7
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int total = 1;
	int n;
	int count;

	printf("Input number for factorial: ");
	scanf("%d", &n);

	for (count = 1; count <= n; count++)
		{
		total = total*count;
		}

	printf("The factorial is %d", total);

	return 0;
}
