/*
 ============================================================================
 Name        : 03sim_intrst.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	float p[3],si=1;
	setbuf(stdout,NULL);
	char name[3][50]={"Principle amount","Interest rate","Number of years"};
	for(i=0;i<3;i++)
	{
		printf("Enter %s: ",name[i]);
		scanf("%f",&p[i]);
		if(i>=0)
			si*=p[i];
	}
	printf("%.2f",si/100);
	return EXIT_SUCCESS;
}
