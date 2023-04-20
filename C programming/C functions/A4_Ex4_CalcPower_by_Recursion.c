/*
 ============================================================================
 Name        : A4_Ex4_CalcPower_by_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Find_Power(int base,int power)
{
	if(power!=0)
	{
		return base*Find_Power(base,power-1);
	}
	else
		return 1;
}

int main(void)
{
	int num,pow;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Enter power number(positive integer): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&pow);

	printf("%d ^ %d = %d",num,pow,Find_Power(num,pow));
}
