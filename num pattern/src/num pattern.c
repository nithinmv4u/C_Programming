/*
 ============================================================================
 Name        : num.c
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
	int a,b;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
