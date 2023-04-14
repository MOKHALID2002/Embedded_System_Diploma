/*
 ============================================================================
 Name        : A3_Ex6_Find_Frequency.c
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
	char s[100];
	char test;
	int i,sum=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(s);

	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&test);

	for(i=0;i<100;i++)
	{
		if(s[i]==test)
		{
			sum++;
		}
	}
	printf("Frequency of %c is %d",test,sum);
	return 0;
}
