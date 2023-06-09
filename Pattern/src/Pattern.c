/*
 ============================================================================
 Name        : Pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i=0,j,k=0,row,count=0;
	setbuf(stdout,NULL);
	printf("enter number of rows: ");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		while(k<row){
			printf(" ");
			k++;
		}
		k=0;
		for(j=0;j<=i;j++){
			printf("* ");
			k++;
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
