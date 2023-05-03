/*
 ============================================================================
 Name        : A5_Ex5_Area_of_Circle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define RES(r,pi) (pi*r*r)

int main(void)
{
	int r;
	float Area,pi=3.141593;
	printf("Enter the radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&r);

	Area = RES(r,pi);
	printf("Area of the circle = %0.2f",Area);
	return 0;
}
