/*
 ============================================================================
 Name        : a4Stringmenu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void Display(char p[]){
	int i;
	for(i=0;p[i]!='\0';i++)
		printf("%c",p[i]);
	printf("\n");
}
int StringLength(char s[]){
	printf("Enter the string: ");
	scanf("%s",s);
	int i;
	for(i=0;s[i]!='\0';i++);
	return i;
}
void StringConcat(char p[],char q[]){
	int i=0,j=0;
	printf("Enter the string 1: ");
	scanf("%s",p);
	printf("Enter the string 2: ");
	scanf("%s",q);
	while(p[i]!='\0')
		i++;
	for(;q[j]!='\0';j++,i++){
		p[i]=q[j];
	}
	p[i]='\0';
	Display(p);
}
void StringRev(char p[]){
	int i=0,k;
	//char a;
	printf("Enter the string : ");
	scanf("%s",p);
	while(p[i]!='\0')
		i++;
	i--;
	for(k=0;k<i;k++){
		p[k]=p[k]+p[k+1];
		p[k+1]=p[k]-p[k+1];
		p[k]=p[k]-p[k+1];
	}
	Display(p);
}

int main(void) {
	int choice,result;
	char a[50],b[50];
	setbuf(stdout,NULL);
	while (1){
		printf("Enter your Choice:\n1.String Length\n"
				"2.String Concatenation\n3.String Reverse\n4.Exit\n");
		scanf("%d",&choice);
		if(choice==1){
			result=StringLength(a);
			printf("%d",result);
		}
		else if(choice==2)
			StringConcat(a,b);
		else if(choice==3)
			StringRev(a);
		else if(choice==4)
			break;
		else{
			printf("Invalid Entry..Fool..!");
			break;
		}
	}
	printf("\nThank You");
	return EXIT_SUCCESS;
}
