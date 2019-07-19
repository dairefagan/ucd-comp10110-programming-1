/*
 ===========================================================================================
 Name        : scoping.c
 Author      : Dáire Fagan
 Created on: : 27 Apr 2016
 Description : Program to demonstrate scoping, COMP10210 Lecture 4
 ============================================================================================
 */

#include <stdio.h>

/* Function prototypes */

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

/* Global variable declaration */

int x = 1;

int main(void)
{
	/* Variable declaration local to main */

	int x = 5;

	printf ("Local x in the outer scope of main is %d\n", x);

	/* New scope */

	{
		/* Local variable in new scope */

		int x = 7;

		printf ("Local x in inner scope of main is %d\n", x);
	}

	printf ("Local x in the outer scope of main is still %d\n", x);

	/* useLocal has automatic local x */

	useLocal();

	/* useStaticLocal has static local x */

	useStaticLocal();

	/* useGlobal uses global x */

	useGlobal();

	/* useLocal reinitialises automatic local x */

	useLocal();

	/* static local x retains its prior value */

	useStaticLocal();

	/* global x also retains its value */

	useGlobal();

	printf ("\nlocal x in main is %d\n", x);

}

/* useLocal reinitialises local variable x during each call */

void useLocal(void)
{
	 /* Initialised each time useLocal is called */

	int x = 25;

	printf ("\nlocal x in useLocal is %d after entering useLocal\n", x);
	++x;
	printf ("local x in useLocal is %d before exiting useLocal\n", x);
}

/* useStaticLocal initialise the static local variable x only the  first time the function
 * is called, after that the value of x is saved between calls for this function */

void useStaticLocal(void)
{
	/* Initialise once */

	static int x = 50;

	printf ("\nlocal static x is %d on entering useStaticLocal\n", x);
	++x;
	printf ("local static x is %d on exiting useStaticLocal\n", x);
}

/* Function useGlobal modifies global variable x during each call */

void useGlobal(void)
{
	printf("\nglobal x is %d on entering useGlobal\n", x);
	x *= 10;
	printf("global x is %d on exiting useGlobal\n", x);
}

















