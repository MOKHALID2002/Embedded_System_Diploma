/*
 ============================================================================
 Name        : Q8_Reverse_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

void REV(int str[])
{
	int i;
	int revstring[SIZE];
	for(i=0;i<SIZE;i++)
	{
		revstring[i]=str[SIZE-i-1];
		printf("%d ",revstring[i]);
	}
}

int main(void)
{
	int string[SIZE];
	int i;

	printf("Enter the array: ");
	fflush(stdin); fflush(stdout);
	for(i=0;i<SIZE;i++)
	{
		scanf("%d",&string[i]);
	}
	printf("Reversed array: ");
	REV(string);
	return 0;
}

