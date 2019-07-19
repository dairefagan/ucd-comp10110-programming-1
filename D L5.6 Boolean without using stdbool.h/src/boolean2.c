/*
 ============================================================================
 Name        : boolean1.c
 Author      : Dáire Fagan
 Created on: : 12 Apr 2016
 Description : Boolean without using stdbool.h COMP101101, Lecture 5
 ============================================================================
 */

// This code to be revisited.

#include <stdio.h>
#include <stdbool.h>
#define THRESHOLD 10

int main(void)
{
	/* Integer c to be used as boolean */
	int c;
	int x;
	scanf("%d", &x);
	/*c evaluates to 1 if x is greater than THRESHOLD */
	c = (x > THRESHOLD);
	if (c)
		{
		printf("x is greater than %d \n", THRESHOLD);
		}
	return 0;
}
