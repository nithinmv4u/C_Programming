/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a,b,c;
	printf("enter two numbers\n");
	scanf ("%d%d",&a,&b);
	c=a+b;
	printf("result: %d",c);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
