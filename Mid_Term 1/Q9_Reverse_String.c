/*
 ============================================================================
 Name        : Q9_Reverse_String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void REV(char ch[],int Len)
{
	int i,j,s,m;
	m=Len-1;
	for(i=Len-1;i>=0;i--)
	{
		if(ch[i]==' '||i==0)
		{
			if(i==0)
				s=0;
			else
				s=i+1;
			for(j=s;j<=m;j++)
			{
				printf("%c",ch[j]);
			}
			m = i-1;
			printf(" ");
		}
	}
}

int main(void)
{
	char string[200];
	int size;
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(string);

	size=strlen(string);
	REV(string,size);

	return 0;
}
