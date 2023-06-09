/*
 ============================================================================
 Name        : ASCII_values.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a='A';
	while(a<='z'){
		printf("%c	%d\n",a,a);
		a++;
	}
	printf("Difference: %d",'A'-'a');
	return EXIT_SUCCESS;
}
