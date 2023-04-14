/*
 ============================================================================
 Name        : A3_Ex7_String_Length.c
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
	char str[100];
	int i;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i=0;i<100;i++)
	{
		if(str[i]=='\0')
		{
			break;
		}
	}
	printf("The length of the entered string is %d",i);
}
