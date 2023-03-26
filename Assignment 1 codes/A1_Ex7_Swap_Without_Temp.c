/*
 ============================================================================
 Name        : A1_Ex7_Swap_Without_Temp.c
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
	float x,y;
	printf("Enter value of x: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x);
	printf("Enter value of y: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&y);

	x=x-y;
	y=x+y;
	x=y-x;
	printf("\nAfter swapping, value of x is : %f",x);
	printf("\nAfter swapping, value of y is : %f",y);
}
