/*
 ============================================================================
 Name        : Q10_Max_Ones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void MAX(int num)
{
	int i,new,sum=0;
	printf("Binary representation: ");
	for(i=31;i>=0;i--)
	{
		new = num>>i;
		if(new&1)
		{
			printf("1");
		}
		else
			printf("0");
	}

	while(num!=0)
	{
		num = num&(num<<1);
		++sum;
	}
	printf("\nMaximum ones between two zeros: %d",sum);
}

int main(void)
{
	int x;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	MAX(x);
	return 0;
}
