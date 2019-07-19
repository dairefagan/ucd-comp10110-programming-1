/*
 ============================================================================
 Name        : helloworld.c
 Author      : Dáire Fagan
 Description : Hello World, COMP10110 Lecture 2 example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch = 'a';

	printf ("The original character is: %c\n", ch);

	ch = ch + 1;
	printf ("If we increase the value by 1 it becomes: %c\n", ch);

	ch = ch - 32;
	printf ("If we decrease the value by 32 it becomes: %c\n", ch);

	return 0;
}
