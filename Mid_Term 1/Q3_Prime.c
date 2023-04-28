/*
 ============================================================================
 Name        : Q3_Prime.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void prime(int x,int y)
{
	int count,j,flag=0;;
	for(count=x;count<y;count++)
	{
		for(j=2;j<=count/2;j++)
		{
			if(count%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("%d ",count);
		flag=0;
	}
}

int main(void)
{
	int in_1,in_2;
	printf("Enter the two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&in_1,&in_2);
	printf("Prime numbers between %d and %d are: ",in_1,in_2);

	prime(in_1,in_2);
	return 0;
}
