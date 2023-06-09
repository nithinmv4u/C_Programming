/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p,i,a[20],b[20];
	setbuf(stdout,NULL);
	printf("enter size of array: ");
	scanf("%d",&p);
	printf("enter values of array 1: ");
	for(i=0;i<p;i++)
		scanf("%d",&a[i]);
	printf("enter values of array 1: ");
	for(i=0;i<p;i++)
	{
		scanf("%d",&b[i]);
	}
	//swap
	for(i=0;i<p;i++)
	{
		a[i]+=b[i];
		b[i]=a[i]-b[i];
		a[i]-=b[i];
	}
	for(i=0;i<p;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<p;i++)
		printf("%d ",b[i]);
	return EXIT_SUCCESS;
}
