/*
 ============================================================================
 Name        : A5_Ex2_Add_Two_Distances.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SDistance
{
	int feet;
	float inch;
}D1,D2,SUM,temp;
int main(void)
{
	printf("Enter the 1st distance: \n");

	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&D1.feet);
	printf("Enter inches: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&D1.inch);

	printf("Enter the 2nd distance: \n");

	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&D2.feet);
	printf("Enter inches: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&D2.inch);

	SUM.feet = D1.feet + D2.feet;
	SUM.inch = D1.inch + D2.inch;

	if(SUM.inch>=12)
	{
		temp.inch = SUM.inch/12;
		SUM.feet += (int)temp.inch;
		SUM.inch = SUM.inch - (int)SUM.inch;
	}
	printf("Sum of distances = %d'+%f\"",SUM.feet,SUM.inch);

	return 0;
}
