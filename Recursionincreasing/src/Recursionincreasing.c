/*
 ============================================================================
 Name        : Recursionincreasing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Pattern(int i,int x){
	int j;
		for(j=0;j<=i;j++){
			printf("%d ",x++);
		}
		printf("\n");
		if(x<10){
			Pattern(++i,x);
		}
		x=x-j;
		if(x){
			for(i=0;i<j;i++){
				printf("%d ",x++);
			}
			printf("\n");
		}
}

int main(void) {
	int i=0,x=1;
	Pattern(i,x);
	return EXIT_SUCCESS;
}
