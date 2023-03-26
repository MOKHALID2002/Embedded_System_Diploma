/*
 ============================================================================
 Name        : A2_Ex4_Positive_or_Negative.c
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
	float x;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);

	if(x>0)
	{
		printf("%f is positive",x);
	}
	else if(x==0)
	{
		printf("You entered zero..");
	}
	else if(x<0)
	{
		printf("%f is negative",x);
	}
}
