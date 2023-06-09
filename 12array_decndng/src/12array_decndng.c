/*
 ============================================================================
 Name        : 12array_decndng.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50],i,j,b;
	setbuf(stdout,NULL);
	printf("Enter the size of array: ");
	scanf("%d",&b);
	printf("enter the values of array: ");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<b;j++)
		{
			if(a[j]<a[j+1])
			{
				a[j]+=a[j+1];
				a[j+1]=a[j]-a[j+1];
				a[j]-=a[j+1];
			}
		}
	}
	for(i=0;i<b;i++)
	{
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
