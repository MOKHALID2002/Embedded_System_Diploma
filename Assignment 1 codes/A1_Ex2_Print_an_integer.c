/*
 ============================================================================
 Name        : A1_Ex2_Print_an_integer.c
 Author      : MOHAMMED KHALID
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("You entered: %d",num);
}
