//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(){
	char character1[50], character2[50];	//create an array
	printf("Enter a string : ");
	scanf("%s",&character1);	//get value from user
	//use builtin function
	strcpy(character2,character1);	//this function used to copy string
	printf("copy string : %s",character2);	//display copy string
	return 0;
}
