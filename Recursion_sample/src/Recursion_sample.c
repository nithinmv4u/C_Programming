/*
 ============================================================================
 Name        : Recursion_sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Reccal(int x){
	printf("%d\n",x);

	if(x){
		--x;
		Reccal(x);
		x++;
	}
	//x++;
	if(x)
	printf("%d\n",x);
//	else {
//		x++;
//	}
}

int main(void) {
	int x=5;
	Reccal(x);
	return EXIT_SUCCESS;
}
