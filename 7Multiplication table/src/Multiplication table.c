/*
 ============================================================================
 Name        : Multiplication.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a,b,i;
	setbuf(stdout,NULL);
	printf("enter the number to find multiplication table: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		b=i*a;
		printf("%d x %d = %d\n",a,i,b);
	}
	return EXIT_SUCCESS;
}
