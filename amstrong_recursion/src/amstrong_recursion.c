/*
 ============================================================================
 Name        : amstrong_recursion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int amstrong(num,i){
	int rem=0, sum=0;
	rem = num%10;
	num=num/10;
	i++;
	if(num){
		amstrong(num,i);
		sum=sum+pow(rem,i);
	}
	return sum;
}

int main(void) {
	int num=0,i=0,sum;
	printf("Enter number: ");
	scanf("%d",num);
	sum = amstrong(num,i);
	if(sum == num){
		printf("Armstrong");
	}
	return EXIT_SUCCESS;
}
