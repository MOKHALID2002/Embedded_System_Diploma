/*
 ============================================================================
 Name        : Q1_Sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int SUM(int N)
{
	static int x=0;
	int R;
	while(N!=0)
	{
		R = N%10;
		x = x+R;
		N = N/10;
	}
	return x;
}

int main(void)
{
	int num,ans;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	ans = SUM(num);

	printf("Answer: %d",ans);
	return 0;
}
