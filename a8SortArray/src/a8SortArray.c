/*
 ============================================================================
 Name        : a8SortArray.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],len,i,j;
	setbuf(stdout,NULL);
	printf("Enter size:");
	scanf("%d",&len);
	printf("Enter numbers:\n");
	for(i=0;i<len;i++)
		scanf("%d",&a[i]);
	for(i=0;i<len;i++){
		for(j=0;j<len;j++){
			if(a[j]<a[j+1]){
				a[j]+=a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]-=a[j+1];
			}
		}
	}
	for(i=0;i<len;i++)
		printf("%d ",a[i]);
	return EXIT_SUCCESS;
}
