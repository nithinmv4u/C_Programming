/*
 ============================================================================
 Name        : Sum.c
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
	int a,b=0;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("enter limit: ");
	scanf("%d",&a);
	for(;a>0;a--)
	{
		printf("%d\n",a);
		if(a%2!=0)
		{
			b=b+a;
		}
	}
	printf("%d",b);
	return EXIT_SUCCESS;
}
