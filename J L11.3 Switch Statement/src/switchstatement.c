/*
 ============================================================================
 Name        : switchstatement.c
 Author      : Dáire Fagan
 Created on: : 26 Apr 2016
 Description : Switch Statement, COMP101101, Lecture 11
 ============================================================================
 */

#include <stdio.h>

int main(void)
{
	int power_watts, life;

	printf ("Please input the wattage of the bulb: ");
	scanf ("%d", &power_watts);

	switch (power_watts)
		{
		case 25:
			life = 5000;
			break;
		case 40:
		case 60:
			life = 2000;
			break;
		case 75:
		case 100:
			life = 1500;
			break;
		default:
			life = 0;
		}

	printf ("The lifetime of the bulb is: %d hours.", life);

	return 0;
}
