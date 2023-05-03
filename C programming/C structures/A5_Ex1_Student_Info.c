/*
 ============================================================================
 Name        : A5_Ex1_Student_Info.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SData
{
	char Name[50];
	int Roll;
	float Marks;
}Students;

int main(void)
{
	printf("Enter the student's information:\n");
	printf("\nEnter your name: ");
	fflush(stdin); fflush(stdout);
	gets(Students.Name);

	printf("Enter your roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Students.Roll);

	printf("Enter your marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&Students.Marks);

	printf("\nDisplaying information:-\n");
	printf("\nName: %s",Students.Name);
	printf("\nRoll number: %d",Students.Roll);
	printf("\nMarks: %0.1f",Students.Marks);
	return 0;
}
