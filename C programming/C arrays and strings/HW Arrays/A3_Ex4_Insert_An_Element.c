/*
 ============================================================================
 Name        : A3_Ex4_Insert_An_Element.c
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
	int num,i,new,L;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	int a[num];
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&new);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&L);

	for(i=num;i>=L;i--)
	{
		a[i]=a[i-1];
	}

	a[i]=new;

	for(i=0;i<num+1;i++)
	{
		printf("%d  ",a[i]);
	}

	return 0;
}
