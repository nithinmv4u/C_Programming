/*
 ============================================================================
 Name        : recursioncrosswords.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void count(char b[],int i){
	printf("%s\n",b);
	if(--i){
		count(b,i);
	}
}
int main(void) {
	printf("Enter the word");
	char a[30];
	setbuf(stdout,NULL);
	scanf("%s",a);
	count(a,8);
	return EXIT_SUCCESS;
}
