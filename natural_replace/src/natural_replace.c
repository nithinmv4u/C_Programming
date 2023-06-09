/*
 ============================================================================
 Name        : natural_replace.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[]={3,2,0,5,1};
    int index,i,j,k=0;
    for(i=0;i<5;i++){
        if(a[i]==0){
            index=i;
        }
    }
    for(i=1;i<=5;i++){
        for(j=0;j<5;j++){
            if(a[j]==i){
                k++;
            }
        }
        if(k==0){
            a[index]=i;
        }
        k=0;
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}
