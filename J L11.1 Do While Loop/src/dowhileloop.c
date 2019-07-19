/*
 ============================================================================
 Name        : dowhileloop.c
 Author      : Dáire Fagan
 Created on: : 26 Apr 2016
 Description : Do While Loop, COMP101101, Lecture 11
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int i = 0;
	do
		{
		printf ("%d ", i++);
		} while (i < 3);

	printf ("\n");

	return 0;
}
