/*
 ============================================================================
 Name        : patt_exam.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char p='A';
	int q=1,i,j;
	for(i=1;i<=7;i++){
		for(j=0;j<i;j++){
			if(i%2==1){
				printf("%c ",p);
			}
			else{
				printf("%d ",q);
				//q++;
			}
		}
		if(i%2==1)
			p++;
		else
			q++;
		printf("\n");
	}
	return EXIT_SUCCESS;
}
