/*
 ============================================================================
 Name        : a9ASCII_val.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char a;
	int x;
	setbuf(stdout,NULL);
	while(1){
		printf("Enter a character:");
		scanf(" %c",&a);
		printf("ASCII value of %c is %d\n",a,a);
		printf("Continue?\n1.Yes\n2.No\n");
		scanf("%d",&x);
		if(x==2)
			break;
	}
	return EXIT_SUCCESS;
}
