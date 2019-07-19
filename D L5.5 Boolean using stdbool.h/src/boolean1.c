/*
 ============================================================================
 Name        : boolean1.c
 Author      : Dáire Fagan
 Created on: : 12 Apr 2016
 Description : Boolean using stdbool.h COMP10110, Lecture 5
 ============================================================================
 */


#include <stdio.h>
#include <stdbool.h>
#define THRESHOLD 10

int main(void)
{
	bool c;
	int x;
	scanf("%d", &x);
	/*c evaluates to true if x is greater than THRESHOLD */
	c = (x > THRESHOLD);
	if (c)
		{
		printf("x is greater than %d \n", THRESHOLD);
		}
	return 0;
}
