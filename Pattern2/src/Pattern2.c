/*
 ============================================================================
 Name        : Pattern2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=1,i,j,y=3;
	do{
		for(i=0;i<2;i++){
			for(j=0;j<x;j++){
				printf("* ");
			}
			printf("\n");
		}
		x++;
		for(i=0;i<y;i++){
			printf("* ");
		}
		printf("\n");
		y+=3;
	}while(y<=12);
	return EXIT_SUCCESS;
}
