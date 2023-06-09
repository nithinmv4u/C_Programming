/*
 ============================================================================
 Name        : Pattern3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(j==0||i==j)
				printf("* ");
			else if(i>j){
				printf("%d ",j);
			}
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
