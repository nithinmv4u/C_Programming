/*
 ============================================================================
 Name        : Amstrong.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,i,sum=0,buff;
	setbuf(stdout,NULL);
	printf("Enter a Number: ");
	scanf("%d",&a);
	buff=a;
	while(a>0){
		i=a%10;
		sum=sum+(i*i*i);
		a=a/10;
	}
	//printf("%d",sum);
	if(sum==buff)
		printf("%d is Armstrong number",buff);
	return EXIT_SUCCESS;
}
