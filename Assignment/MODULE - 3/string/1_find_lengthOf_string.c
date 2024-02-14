//Write a program in C to find the length of a string without using library
//functions.
#include<stdio.h>
int main(){
	char character[50];	//create array
	int i, length=0;	//declare a variable
	printf("Enter a string : ");	//print message
	scanf("%s", character);	//get value from user
	for(i=0; character[i]!=0; i++){
		length++;	//increment
	}
	printf("\n Length of String : %d", length);	//display length of string
	return 0;
}
