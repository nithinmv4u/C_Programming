/*
 ============================================================================
 Name        : Pattern5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reverse(int i,int x){
	int j;
	if(x){
		x--;
		Reverse(i, x);
		x++;
	}
	for(j=x;j>=0;j--){
		printf("%d ",j);
	}
	printf("\n");
}

int main(void) {
	int x=5,i=0;
	Reverse(i,x);
	return EXIT_SUCCESS;
}
