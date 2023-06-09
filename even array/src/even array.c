/*
 ============================================================================
 Name        : even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p,i,a[10],q=0;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("enter size of array: ");
	scanf("%d",&p);
	printf("enter values of array: ");
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<p;i++)
	{
		if(a[i]%2==0)
			q=q++;
	}
	printf("\n there are %d even numbers in array",q);
	return EXIT_SUCCESS;
}
