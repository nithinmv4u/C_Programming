/*
 ============================================================================
 Name        : 15Array_fn.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>//int getay(int);
void getArray(int array[],int x)
{
	int i;
	printf("Enter array values: \n");
	for(i=0;i<x;i++)
		scanf("%d",&array[i]);
}
void displayArray(int abc[],int y)
{
	int i;
	printf("The Array is:\n");
	for(i=0;i<y;i++)
		printf("%d ",abc[i]);
}
int main(void) {
	int array[10],p;
	setbuf(stdout,NULL);
	printf("enter size of array: ");
	scanf("%d",&p);
	getArray(array,p);
	displayArray(array,p);
	return 0;
}







/*int *getArray(int p)
{
	int i,*a;
	for(i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	return a;
}
void displayArray(int *a,int p)
{
	int i;
	for(i=0;i<p;i++)
	{
		printf("%d ",a[i]);
	}
}
int main(void) {
	int *a,p;
	setbuf(stdout,NULL);
	printf("enter size of array:");
	scanf("%d",&p);
	a=getArray(p);
	displayArray(a,p);
	return EXIT_SUCCESS;
}*/
