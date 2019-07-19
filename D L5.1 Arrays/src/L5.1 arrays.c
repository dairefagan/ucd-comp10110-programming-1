/*
 ============================================================================
 Name        : arrays.c
 Author      : Dáire Fagan
 Created on: : 11 Apr 2016
 Description : Arrays COMP101101, Lecture 5
 ============================================================================
 */

// This code to be revisited.

#include <stdio.h>

/* We set a maximum size for the array */

#define MAX_SIZE 10

int main(void)
{
	/* We must declare the variable size to place a value in it later */

	int x[MAX_SIZE], size, i;
	scanf("%d", &size);

	/* We print the array */

	for (i=0;i<size;i++)
		{
			x[i]=i;
			printf("%d\n", x[i]);
		}

	return 0;

}
