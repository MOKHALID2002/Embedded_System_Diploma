/*
 ============================================================================
 Name        : A3_Ex5_Search.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num,i,F;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	int a[num];

	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&F);

	for(i=0;i<num;i++)
	{
		if(a[i] == F)
		{
			printf("Number found..Location: %d",i+1);
			break;
		}
	}

	if(a[i]!=F)
	{
		printf("Wrong entry..Please try again.");
	}
}
