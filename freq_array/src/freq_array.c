/*
 ============================================================================
 Name        : freq_array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[20],size,i,j,count=0;
	setbuf(stdout,NULL);
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter elements\n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[i]==a[j])
				count++;
		}
		printf("Frequency of %d is %d\n",a[i],count);
		count=0;
	}
	return EXIT_SUCCESS;
}
