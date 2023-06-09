/*
 ============================================================================
 Name        : Pattern6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x=5,j,i,k=x;
	for(i=0;i<x;i++){
		for(j=k;j>0;j--){
			printf("  ");
		}
		k--;
		for(j=i;j>=0;j--){
			printf("%d ",j);
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
