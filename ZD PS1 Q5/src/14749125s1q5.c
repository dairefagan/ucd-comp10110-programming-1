/*
 ===========================================================================================
 Name        : 14749125s1q5.c
 Author      : Dáire Fagan
 Created on: : 27 Apr 2016
 Description : Program to calculate waist-hip-ratio from user input waist and hip size in
  	  	  	 : inches, and then output whether they are potentially obese or not obese,
  	  	  	 : differentiating between men and women, in line with WHO guidelines.
 	 	 	 : COMP10120, Practical Set 1 Question 5
 ============================================================================================
 */

/*
Pseudocode

If users whr is greater or equal to the limit for their sex
	Print "You are potentially obese"
Else
	Print "You are potentially not obese"
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{

	double waist, hip, whr;
	char sex;
	double malelimit = 0.90;
	double femalelimit = 0.85;
	bool obese;


	printf ("\nPlease input m if male, f if female: ");
	sex = getchar();

	printf ("\nPlease input your waist measurement in inches: ");
	scanf ("%lf", &waist);

	printf ("\nPlease input your hip measurement in inches: ");
	scanf ("%lf", &hip);

	whr = waist / hip;

	printf ("\nYour WHR is %.2f.\n", whr);

	switch (sex)
		{
		case 'm':
			if (whr >= malelimit)
				{
				obese = true;
				}
		break;
		case 'f':
			if (whr >= femalelimit)
				{
				obese = true;
				}
		break;
		default:
			obese = false;
		}

	puts(obese == true? "Your are potentially obese." : "\nYou are potentially not obese.");

	return 0;
}
