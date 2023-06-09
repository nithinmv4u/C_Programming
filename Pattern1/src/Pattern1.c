/*
 ============================================================================
 Name        : Pattern1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,x=0,n;
	setbuf(stdout,NULL);
	printf("Enter max length: ");
	scanf("%d",&n);
	while(1){
		x=x+3;
		for(i=0;i<2;i++){
			for(j=0;j<x;j++){
				printf("* ");
			}
			printf("\n");
		}
		if(x>=n)
			break;
		printf("*\n");
	}
	return EXIT_SUCCESS;
}
