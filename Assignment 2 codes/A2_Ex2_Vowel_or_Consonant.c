/*
 ============================================================================
 Name        : A2_Ex2_Vowel_or_Consonant.c
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
	char letter;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&letter);

	switch(letter)
	{
	case 'a':
	case 'A':
		printf("%c is a vowel",letter);
		break;
	case 'e':
	case 'E':
		printf("%c is a vowel",letter);
		break;
	case 'i':
	case 'I':
		printf("%c is a vowel",letter);
		break;
	case 'o':
	case 'O':
		printf("%c is a vowel",letter);
		break;
	case 'u':
	case 'U':
		printf("%c is a vowel",letter);
		break;
	default:
		printf("%c is a consonant",letter);
		break;
	}
}
