/*
 ============================================================================
 Name        : moc1rev.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,i,j,a[50];
	setbuf(stdout,NULL);
	printf("Enter Size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	//size--;
	for(i=size-1;i>0;i--){
		for(j=0;j<i;j++){
			a[j]+=a[j+1];
			a[j+1]=a[j]-a[j+1];
			a[j]-=a[j+1];
		}
	}
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
