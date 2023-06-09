/*
 ============================================================================
 Name        : grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void) {
	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	//clrscr();
	int mark;
	printf("enter your mark percentage: ");
	scanf("%d",&mark);
	if(mark>=90)
	{
		printf("Grade A");
	}
	else if(mark>=80)
	{
		printf("Grade B");
	}
	else if(mark>=70)
	{
		printf("Grade C");
	}
	else if(mark>=60)
	{
		printf("Grade D");
	}
	else if(mark>=50)
	{
		printf("Grade B");
	}
	else
	{
		printf("Failed...!");
	}
	return EXIT_SUCCESS;
}
