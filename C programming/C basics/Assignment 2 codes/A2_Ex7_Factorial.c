/*
 ============================================================================
 Name        : A2_Ex7_Factorial.c
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
	int ans=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	if(n==0)
	{
		printf("Factorial = 1");
	}
	else if(n<0)
	{
		printf("ERROR..Please enter a non negative value.");
	}

	if(n>0)
	{
		for(i=1;i<=n;i++)
		{
			ans=ans*i;
		}
		printf("Factorial = %d",ans);
	}

}
