/*
 ============================================================================
 Name        : 2ndSmallest_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10],x,i,s,t;
		setbuf(stdout,NULL);
		printf("Enter array size");
		scanf("%d",&x);
		for(i=0;i<x;i++){
			scanf("%d",&a[i]);
		}
		s=a[0],t=a[1];
		for(i=0;i<x;i++){
			if(s>a[i])
				s=a[i];
		}
		for(i=0;i<x;i++){
			if(t>a[i]&&s!=a[i]){
				t=a[i];
			}
		}
		printf("%d\n",s);
		printf("%d",t);
	return EXIT_SUCCESS;
}
