/*
 ============================================================================
 Name        : String_sort.c
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
	int num,i,j,k=0;
	setbuf(stdout,NULL);
	printf("How many string to sort: ");
	scanf("%d",&num);
	printf("Enter %d strings:\n",num);
	for(i=0;i<num;i++){
		scanf("%s",a[i]);
	}
	while(k<num){
		for(i=0;strcmp(a[i],a[i+1])>0;i++){
			for(j=0;strcmp(a[i],a[i+1])>0;i++){
				strcpy(b,a[i]);
				strcpy(a[i],a[i+1]);
				strcpy(a[i+1],b);
			}
		}
		k++;
	}

	for(i=0;i<num;i++){
		printf("%s\n",a[i]);
	}
	return EXIT_SUCCESS;
}
