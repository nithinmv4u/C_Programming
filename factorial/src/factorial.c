/*
 ============================================================================
 Name        : factorial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,n,fact=1;
	setbuf(stdout,NULL);
	printf("Enter the number: ");
	scanf("%d",&n);
	for(a=0;a<n;a++){
		fact=fact*(n-a);
	}
	printf("Factorial = %d",fact);
	return EXIT_SUCCESS;
}
