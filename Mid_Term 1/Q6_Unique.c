/*
 ============================================================================
 Name        : Q6_Unique.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define N 7

int Unique(int arr[]);

int main(void)
{
	int i,num;
	int a[N];
	printf("Enter an array: ");
	fflush(stdin); fflush(stdout);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}

	num = Unique(a);
	printf("Unique number: %d",num);
	return 0;
}

int Unique(int arr[])
{
	int i,g=0;
	for(i=0;i<N;i++)
	{
		g^=arr[i];
	}
	return g;
}
