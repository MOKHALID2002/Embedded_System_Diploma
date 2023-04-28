/*
 ============================================================================
 Name        : Q2_Sqrt.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float ROOT(int x)
{
	return sqrt(x);
}

int main(void)
{
	int num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	printf("Square root of %d = %0.3f",num,ROOT(num));
}
