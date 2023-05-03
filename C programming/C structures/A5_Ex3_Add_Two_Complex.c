/*
 ============================================================================
 Name        : A5_Ex3_Add_Two_Complex.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
	double m_R;
	double m_I;
};

struct Scomplex ReadComplex(char name[])
{
	struct Scomplex Read;
	printf("%s is:\n",name);
	printf("Enter real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%lf%lf",&Read.m_R,&Read.m_I);
	return Read;
}

struct Scomplex AddComplex(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex C;
	C.m_R = A.m_R+B.m_R;
	C.m_I = A.m_I+B.m_I;
	return C;
}

void PrintComplex(char name[],struct Scomplex C)
{
	printf("%s .. %0.1lf+%0.1lfi",name,C.m_R,C.m_I);
}

int main(void)
{
	struct Scomplex X_1 = ReadComplex("First number");
	struct Scomplex X_2 = ReadComplex("Second number");
	struct Scomplex SUM = AddComplex(X_1,X_2);
	PrintComplex("Sum is",SUM);
	return 0;
}
