/*
 ============================================================================
 Name        : A4_Ex2_Factorial_by_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int value)
{
	if(value!=1)
	{
		return value*Factorial(value-1);
	}

}

int main(void)
{
	int num,ans;
	printf("Enter a positive number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	ans = Factorial(num);
	printf("The factorial of %d is %d",num,ans);
	return 0;
}
