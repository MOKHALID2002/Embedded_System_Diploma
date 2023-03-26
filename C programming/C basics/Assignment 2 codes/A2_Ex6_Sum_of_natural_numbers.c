/*
 ============================================================================
 Name        : A2_Ex6_Sum_of_natural_numbers.c
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
	int n,i;
	int sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum = %d",sum);
}
