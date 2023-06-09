/*
 ============================================================================
 Name        : a3stringcomp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int strlength(char arr[]){
	int i;
	for(i=0;arr[i]!='\0';i++);
	return i;
}
int main(void) {
	int p,q,i,j=0;
	char a[20]={},b[20]={};
	setbuf(stdout,NULL);
	printf("Enter first string: ");
	scanf("%s",a);
	p=strlength(a);
	printf("Enter second string: ");
	scanf("%s",b);
	q=strlength(b);
	if(p==q){
		for(i=0;i<p;i++){
			if(a[i]==b[i])
				j++;
		}
	}
	if(j==p)
		printf("Same String");
	else
		printf("Different String");
	return EXIT_SUCCESS;
}
