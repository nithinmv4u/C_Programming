/*
 ============================================================================
 Name        : a6StringSort.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[50][50],b[50];
	int num,i,j;
	setbuf(stdout,NULL);
	printf("How many string to sort: ");
	scanf("%d",&num);
	printf("Enter %d strings:\n",num);
	for(i=0;i<num;i++){
		scanf("%s",a[i]);
	}
	for(i=1;i<num;i++){
		for(j=0;j<num-1;j++){
			if(strcmp(a[j],a[j+1])>0){
				strcpy(b,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],b);
			}
		}
	}

	for(i=0;i<num;i++){
		printf("%s\n",a[i]);
	}
	return EXIT_SUCCESS;
}
