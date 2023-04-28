/*
 ============================================================================
 Name        : Q4_Reverse_Digits.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void Reverse(int X)
{
	int rem;
	while(X!=0)
	{
		rem=X%10;
		X=X/10;
		printf("%d",rem);
	}
}

int main(void)
{
	int num;

	printf("Input: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Output: ");
	Reverse(num);

	return 0;
}
