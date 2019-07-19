/*
 ============================================================================
 Name        : typepromotion.c
 Author      : Dáire Fagan
 Created on: : 1 Apr 2016
 Description : Demonstration of Type Promotion. COMP101101
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double a = 15.0;
	double b = 4.0;
	int c = 15;
	int d = 4;
	double e = a/b;
	int f = c/d;
	double g = a/d;
	double h = c/b;

	printf("The value assigned to the double float variable a is %.2lf\n", a);
	printf("The value assigned to the double float variable b is %.2lf\n", b);
	printf("The value assigned to the integer variable c is %d\n", c);
	printf("The value assigned to the integer variable d is %d\n", d);
	printf("Double a 15.0 divided by double b 4.0 is %.2lf\n", e);
	printf("Integer c 15 divided by integer d 4 is %d, result of division without remainder\n", f);
	printf("Double a 15.0 divided by integer d is %.2lf, as integer d is promoted to a double before division\n", g);
	printf("Integer c 15 divided by double b is %.2lf, so type promotion of integer to double works when either the numerator or denominator are a double\n", h);

	return 0;
}
