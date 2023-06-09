/*
 ============================================================================
 Name        : 02sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2;
	setbuf(stdout,NULL);
	printf("enter first number: ");
	scanf("%d",&number1);
	printf("enter second number: ");
	scanf("%d",&number2);
	number1+=number2;
	printf("Sum= %d",number1);
	return EXIT_SUCCESS;
}
