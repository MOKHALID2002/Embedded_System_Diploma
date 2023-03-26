/*
 ============================================================================
 Name        : A2_Ex3_Maximum_between_three_numbers.c
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
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f%f",&x,&y,&z);

	if(x>y&&x>z)
	{
		printf("Largest number is %f",x);
	}
	else if(y>x&&y>z)
	{
		printf("Largest number is %f",y);
	}
	else if(z>x&&z>y)
	{
		printf("Largest number is %f",z);
	}
}
