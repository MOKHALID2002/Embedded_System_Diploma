/*
 ============================================================================
 Name        : A2_Ex8_Simple_Calculator.c
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
	char op;
	float num1,num2;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&op);

	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f%f",&num1,&num2);

	switch(op)
	{
	case '+':
		printf("%0.2f + %0.2f = %0.2f",num1,num2,num1+num2);
		break;
	case '-':
		printf("%0.2f - %0.2f = %0.2f",num1,num2,num1-num2);
		break;
	case '*':
		printf("%0.2f * %0.2f = %0.2f",num1,num2,num1*num2);
		break;
	case '/':
		printf("%0.2f / %0.2f = %0.2f",num1,num2,num1/num2);
		break;
	}
}
