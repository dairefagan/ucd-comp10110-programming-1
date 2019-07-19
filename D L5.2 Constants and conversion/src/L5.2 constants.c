/*
 ============================================================================
 Name        : constants.c
 Author      : Dáire Fagan
 Created on: : 11 Apr 2016
 Description : Using constants and conversion, COMP101101 Lecture 5
 ============================================================================
 */


#include <stdio.h>

/* Declare constant values that cannot be changed */

double const CENTIMETRES_IN_INCH = 2.54;
double const INCHES_IN_FOOT = 12.0;

int main(void)
{
	double length_in_feet;
	double length_in_cm;

	printf("Input length in feet:");
	scanf("%lf", &length_in_feet);

	length_in_cm = length_in_feet * INCHES_IN_FOOT * CENTIMETRES_IN_INCH;

	printf("length is %.2lfcm\n", length_in_cm);

	return 0;
}
