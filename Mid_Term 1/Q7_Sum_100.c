/*
 ============================================================================
 Name        : Q7_Sum_100.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int SUM(void)
{
	static int num=1;
	static int res=0;

	if(num<=100)
	{
		res+=num;
		++num;
		SUM();
	}
	else
		return 0;
	return res;
}

int main(void)
{
	printf("Sum of numbers from 1 to 100: ");

	int ans=SUM();

	printf("%d",ans);
	return 0;
}
