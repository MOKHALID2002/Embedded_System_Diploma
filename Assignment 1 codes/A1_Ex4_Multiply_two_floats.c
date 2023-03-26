/*
 ============================================================================
 Name        : A1_Ex4_Multiply_two_floats.c
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
	float num1,num2,answer;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&num1,&num2);

	answer = num1 * num2;
	printf("Product = %f",answer);
}
