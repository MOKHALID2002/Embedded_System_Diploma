/*
 ============================================================================
 Name        : A4_Ex3_Reverse_by_Recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Reverse(void)
{
	char sen;
	scanf("%c",&sen);
	if(sen!='\n')
	{
		Reverse();
		printf("%c",sen);
	}
}
int main(void)
{

	printf("Enter a sentence: ");
	fflush(stdin); fflush(stdout);

	Reverse();
}
