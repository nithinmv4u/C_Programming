/*
 ============================================================================
 Name        : Pattern4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,x=1;
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			printf("%d ",x++);
		}
		printf("\n");
		if(x==10){
			for(i=0;i<10;i++){
				for(j=0;j<=i;j++){
					printf("%d ",x);
				}
		}
	}
	return EXIT_SUCCESS;
}
