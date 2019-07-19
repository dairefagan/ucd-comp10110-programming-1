/*
 ======================================================================================
 Name        : getchar.c
 Author      : Dáire Fagan
 Created on: : 26 Apr 2016
 Description : Using getchar to create program similar to scanf, COMP101101, Lecture 11
 =======================================================================================
 */

#include <stdio.h>
#define MAX_MSG_LEN 12

int main(void)
{

	/* +1 is used in the declaration below for the null terminator */

	char msg[MAX_MSG_LEN + 1];
	char ch = 'x';
	int len = 0;

	printf ("Input a string of no more than 12 characters long: ");

	while (len < MAX_MSG_LEN && ch != ' ' && ch != '\t' && ch != '\n')
		{
		ch = getchar();
		msg[len++] = ch;
		}

	/* Add null terminator to the end of the  string */

	/* Neil had this as msg[len++] but I do not think we need to increment len as the loop
	 * is already finished */

	msg[len] = '\0';

	printf ("The string is %s\n", msg);

	return 0;
}
