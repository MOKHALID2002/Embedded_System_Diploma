/*
 ============================================================================
 Name        : A1_Ex6_Swap_two_numbers.c
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
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	float temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping, value of a is : %f",a);
	printf("\nAfter swapping, value of b is : %f",b);
}
