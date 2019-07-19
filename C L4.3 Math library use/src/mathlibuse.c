/*
 ============================================================================
 Name        : mathlibuse.c
 Author      : Dáire Fagan
 Created on: : 1 Apr 2016
 Description : Demonstration of Type Promotion. COMP101101, Lecture 4
 ============================================================================
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
	double f, root_f, f_cubed, f_squared, sin_f, arcsin_f, exp_f, log_f, log10_f;
	f = 0.4;
	root_f = sqrt(f);
	f_cubed = pow(f,3);
	f_squared = f*f;
	sin_f = asin(f);
	arcsin_f = asin(f);
	exp_f = exp(f);
	log_f = log(f);
	log10_f = log10(f);


	printf("double variable f is %lf\n", f);
	printf("double variable f in scientific notation is %e\n", f);
	printf("the square root of %lf is %lf\n", f, root_f);
	printf("%lf cubed is %lf\n", f, f_cubed);
	printf("f squared is %lf\n", f_squared);
	printf("the sine of f is %lf\n", sin_f);
	printf("the arcsine of f is %lf\n", arcsin_f);
	printf("the exponential of f is %lf\n", exp_f);
	printf("the log of f is %lf\n", log_f);
	printf("the log10 of f is %lf\n", log10_f);
	printf("The value of Pi is %e\n", M_PI);
}
