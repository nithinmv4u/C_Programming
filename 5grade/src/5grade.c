/*
 ============================================================================
 Name        : 5grade.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0,a=90;
	float mark;
	char s[6][20]={"A","B","C","D","E","Failed"};
	setbuf(stdout,NULL);
	printf("Enter Mark: ");
	scanf("%f",&mark);
	while(i<7)
	{
		if(mark>a||i==5)
		{
			printf("Grade %s",s[i]);
			break;
		}
		a-=10;
		i++;
	}
	return EXIT_SUCCESS;
}
