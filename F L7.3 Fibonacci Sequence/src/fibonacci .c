/*
 ============================================================================
 Name        : fibonacci.c
 Author      : Dáire Fagan
 Created on: : 13 Apr 2016
 Description : Fibonacci Sequence, COMP101101, Lecture 7 (code not in lecture)
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int n, first = 0, second = 1, next, c;

	printf("Enter the number of terms: ");
	scanf("%d", &n);

	printf("The first %d terms of the Fibonacci Sequence are:\n", n);

	for (c = 0; c < n; c++)
	{
		/* Iterations 1 & 2: meet the condition of this if statement */
		if (c <= 1)
		{
			next = c;
		}
		/* thereafter, from c = 2, this else statement is used */
		else
		{	/* Iteration 3: next = 0 + 1 = 1 */
			/* Iteration 4: next = 1 + 1 = 2 */
			/* Iteration 5: next = 1 + 2 = 3 */
			next = first + second;
			/* Iteration 3: first = 1 */
			/* Iteration 4: first = 1 */
			/* Iteration 5: first = 2 */
			first = second;
			/* Iteration 3: second = 1 */
			/* Iteration 4: second = 2 */
			/* Iteration 5: second = 3 */
			second = next;
		}
		printf("%d\n", next);

		/* 0,1,1,2,3... */
	}

	return 0;
}
