//Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main(){
	char characters[50],i;	//create variable and characters[50] is create array
	printf("Enter a string :");
	scanf("%s",&ch);	//get value from user
	
	printf("Individual characters from a string : \n");
	for(i=0; ch[i]!=0; i++){
		printf("%c\n",ch[i]);	//print characters
	}
	return 0;
}
