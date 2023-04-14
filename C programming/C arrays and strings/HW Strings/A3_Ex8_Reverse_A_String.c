/*
 ============================================================================
 Name        : A3_Ex8_Reverse_A_String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char string[200];
	char revstring[200];
	int i,m=0;

	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(string);

	m=strlen(string);

	for(i=0;string[i]!=0;i++)
	{
		revstring[i]=string[m-i-1];
	}

	revstring[m]=0;

	printf("Reversed string: %s",revstring);
}
