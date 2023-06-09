/*
 ============================================================================
 Name        : a5CopyString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a[100],b[100];
	int j;
	setbuf(stdout,NULL);
	printf("Enter String 1:");
	scanf("%s",a); 			//[^\n]s
	printf("Enter String 2:");
	scanf("%s",b);
	for(j=0;b[j]!='\0';j++)
		a[j]=b[j];
	a[j]='\0';
	printf("%s",a);
	return EXIT_SUCCESS;
}
