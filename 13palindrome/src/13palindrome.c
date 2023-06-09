/*
 ============================================================================
 Name        : 13palindrome.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[50];
	int p,q=0,i,j;
	setbuf(stdout,NULL);
	printf("Enter the word: ");
	scanf("%s",name);
	for(p=0;name[p]!='\0';p++);
	for(i=0,j=(p-1);i<(p/2);i++,j--)
	{
		if(name[i]==name[j])
			q++;
	}
	if(q==(p/=2))
		printf("It's a Palindrome");
	else
		printf("Not Palindrome");
	return EXIT_SUCCESS;
}
