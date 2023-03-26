/*
 ============================================================================
 Name        : A1_Ex3_Add_two_integers.c
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
	int n1,n2,sum;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&n1,&n2);

	sum = n1 + n2;
	printf("Sum = %d",sum);
}
