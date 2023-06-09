/*
 ============================================================================
 Name        : a1pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,k=0,x;
	setbuf(stdout,NULL);
	printf("Enter limit: ");
	scanf("%d",&x);
	for(i=0;i<=x;i++){
		while(k<x){
			printf(" ");
			k++;
		}
		k=0;
		for(j=1;j<=i;j++){
			printf("%d ",j);
			k++;
			}
		if(k==0)
			printf(" ");
		printf("1\n");
		}
	return EXIT_SUCCESS;
}
