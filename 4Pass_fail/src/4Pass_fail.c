/*
 ============================================================================
 Name        : 4Pass_fail.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	float a=0;
	setbuf(stdout,NULL);
	for(i=0;i<2;i++)
	{
		printf("Enter Mark:");
		scanf("%f",&a);
		if(a>=50)
			printf("Passed...! :)\n");
		else
			printf("Failed...! :(\n");
	}
	return EXIT_SUCCESS;
}
