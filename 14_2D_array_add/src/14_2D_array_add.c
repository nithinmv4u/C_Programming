/*
 ============================================================================
 Name        : 14_2D_array_add.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10][10],b[10][10],p,i,j;
	setbuf(stdout,NULL);
	printf("Enter size of arrays: ");
	scanf("%d",&p);
	printf("enter the values of array 1\n");
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter the values of array 2\n");
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("Sum of two array is:\n");
	for(i=0;i<p;i++){
		for(j=0;j<p;j++){
			a[i][j]+=b[i][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
