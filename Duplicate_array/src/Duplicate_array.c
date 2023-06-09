/*
 ============================================================================
 Name        : Duplicate_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],i,j,k,size;
	setbuf(stdout,NULL);
	printf("Enter size of array");
	scanf("%d",&size);
	printf("Enter array numbers\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(a[i]==a[j]){
				for(k=j;k<size-1;k++){
					a[j]=a[j+1];
				}
				size--;
			}
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
