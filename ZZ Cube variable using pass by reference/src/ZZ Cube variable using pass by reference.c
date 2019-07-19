/*
 ============================================================================
 Name        : ZZ.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Cube variable using pass by reference with a pointer argument
 ============================================================================
 */

#include <stdio.h>

/* Function prototype */

void cubeByReference(int *nPtr);

int main(void)
{
	int number = 5;

	printf ("The original value of the number is %d", number);

	/* Pass number by value to the function cubeByValue */
	cubeByReference(&number);

	printf ("\nThe new value of the number is %d\n", number);
}

/* Function to calculate cube of *nPtr, actually modifies number in main, no need to return */

void cubeByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
