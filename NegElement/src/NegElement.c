/*
 ============================================================================
 Name        : NegElement.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[20],size,i;
	setbuf(stdout,NULL);
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		if(a[i]<0){
			printf("%d position of array is negative\n",i);
		}
	}
	return EXIT_SUCCESS;
}
