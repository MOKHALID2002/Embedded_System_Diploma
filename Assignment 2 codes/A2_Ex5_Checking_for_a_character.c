/*
 ============================================================================
 Name        : A2_Ex5_Checking_for_a_character.c
 Author      : MOHAMMED KHALID
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char x;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);

	if((x>=65 && x<=90) || (x>=97 && x<=122))
	{
		printf("%c is an alphabet.",x);
	}
	else
	{
		printf("%c is not an alphabet.",x);
	}
}
