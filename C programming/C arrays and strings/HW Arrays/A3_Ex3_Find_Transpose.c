/*
 ============================================================================
 Name        : A3_Ex3_Find_Transpose.c
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
	int r,c,i,j;
	printf("Enter number of rows and columns of the matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);
	float M[r][c];

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter the item (%d,%d): ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&M[i][j]);
		}
	}
	printf("The matrix is:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%0.2f  ",M[i][j]);
		}
		printf("\n");
	}
	printf("The transpose matrix is:\n");

	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%0.2f  ",M[j][i]);
		}
		printf("\n");
	}
}
