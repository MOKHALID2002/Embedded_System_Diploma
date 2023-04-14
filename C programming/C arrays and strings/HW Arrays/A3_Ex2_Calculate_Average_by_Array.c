/*
 ============================================================================
 Name        : A3_Ex2_Calculate_Average_by_Array.c
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
	int n,i;
	float sum=0,average;
	printf("Enter the number of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float avg[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&avg[i]);
		sum = sum+avg[i];
	}
	average = sum/n;
	printf("Average = %f",average);
	return 0;
}
