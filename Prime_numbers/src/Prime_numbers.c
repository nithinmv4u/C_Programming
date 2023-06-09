/*
 ============================================================================
 Name        : Prime_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,lim=20,count=0;
	for(i=1;i<=lim;i++){
		for(j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count<=2){
			printf("%d ",i);
		}
		count=0;
	}
	return EXIT_SUCCESS;
}
