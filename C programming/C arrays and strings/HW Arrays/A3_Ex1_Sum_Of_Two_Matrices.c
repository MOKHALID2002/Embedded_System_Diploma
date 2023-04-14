/*
 ============================================================================
 Name        : A3_Ex1_Sum_Of_Two_Matrices.c
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
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;
	printf("Enter the elements of the 1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2nd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of matrices:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%0.2f  ",sum[i][j]);
		}
		printf("\n");
	}
}
