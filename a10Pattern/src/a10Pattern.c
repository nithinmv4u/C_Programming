/*
 ============================================================================
 Name        : a10Pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Pattern(char b,char lim){
	printf("%c ",b);
	if(b<lim){
		Pattern(++b,lim);
		b--;
	}
	if(b>'A')
	printf("%c ",--b);
}
int main(void) {
	int i=65;
	char a='A',limit='D';
	setbuf(stdout,NULL);
	printf("Enter the limit character: ");
	scanf("%c",&limit);
	//printf("%c\n",limit);
	for(;i<=limit;i++){
		Pattern(a,i);
		printf("\n");
	}
	return EXIT_SUCCESS;
}
