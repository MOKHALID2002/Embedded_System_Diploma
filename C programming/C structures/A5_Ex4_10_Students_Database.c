/*
 ============================================================================
 Name        : A5_Ex4_10_Students_Database.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM 5
struct SData
{
	char Name[50];
	int Marks;
}Students[NUM];

int main(void)
{
	int i;
	printf("Enter the information of the students:-\n");
	for(i=1;i<=NUM;i++)
	{
		printf("For roll number %d",i);
		printf("\nEnter your name: ");
		fflush(stdin); fflush(stdout);
		gets(Students[i].Name);

		printf("Enter your marks: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&Students[i].Marks);
	}
	printf("\nDisplaying information:-\n");
	for(i=1;i<=NUM;i++)
	{
		printf("Information for roll number %d",i);
		printf("\nName: %s",Students[i].Name);
		printf("\nMarks: %d\n",Students[i].Marks);
	}
	return 0;
}
