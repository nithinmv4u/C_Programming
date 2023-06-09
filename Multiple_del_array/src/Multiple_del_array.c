/*
 ============================================================================
 Name        : Multiple_del_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[20],i,j,size;
	setbuf(stdout,NULL);
	printf("Enter the size:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		if(a[i]%3==0){
			for(j=i;j<size&&a[j+1]!='\0';j++){
				a[j]=a[j+1];
			}
			i--;
		}
		size--;
	}
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	return EXIT_SUCCESS;
}
