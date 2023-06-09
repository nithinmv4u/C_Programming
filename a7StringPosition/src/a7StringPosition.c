/*
 ============================================================================
 Name        : a7StringPosition.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char a[100],b[50];
	int x,y,i,j;
	setbuf(stdout,NULL);
	printf("Enter String: ");
	gets(a);
	printf("Enter Search string:");
	gets(b);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++){
		for(j=0;b[j]==a[i];j++,i++){
			if(j==y-1){
				printf("\nString is at %d.",(i-j));
				i--;
			}
		}
	}
	return EXIT_SUCCESS;
}
