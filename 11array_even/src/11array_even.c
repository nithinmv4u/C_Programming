/*
 ============================================================================
 Name        : 11array_even.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],i,b,c=0;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d",&b);
	printf("enter the values of array: ");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
		if((a[i]%2)==0)
			c++;
	}
	printf("Number of even numbers in the given array is %d",c);
	return EXIT_SUCCESS;
}
