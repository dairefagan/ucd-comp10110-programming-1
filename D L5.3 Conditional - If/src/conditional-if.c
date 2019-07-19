/*
 ============================================================================
 Name        : conditionalif.c
 Author      : Dáire Fagan
 Created on: : 11 Apr 2016
 Description : Using the If Conditional, COMP101101, Lecture 5
 ============================================================================
 */

#include <stdio.h>
#define MAX_SIZE 100

int main(void)
{
	int x[MAX_SIZE], size, i;

	printf("Input the size you would like the array to be:");
	scanf("%d", &size);

	/* We use a boolean conditional statement, so the if statement will only run where this is met */

	if (size <= MAX_SIZE)
		{
			for (i=0;i<size;i++)
			{
				x[i]=i;
				printf("%d\n", x[i]);
			}
		}
	if (size > MAX_SIZE)
	{
		printf("Please run the program again and enter a size less than %d\n", MAX_SIZE);
	}

	return 0;
}
