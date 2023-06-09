/*
 ============================================================================
 Name        : 8Sum_odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,sum=0;
	setbuf(stdout,NULL);
	printf("Enter a limit : ");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		if(i%2!=0)
			sum+=i;
	}
	printf("Sum of odd numbers= %d",sum);
	return EXIT_SUCCESS;
}
