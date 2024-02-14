//Write a program in C to count the total number of words in a string
#include<stdio.h>
#include<string.h>
int main(){
	char string1[50];	//create an array
	int words = 0, i;	//create variable
	printf("Enter a string : ");
	gets(string1);	//get value from user
	for(i=0; string1[i]; i++){
		//check condition
		if(string1[i]==32){
			words++;	//increment
		}
	}
	//check condition
	if(i>0){
		words++;	//increment
	}
	printf("no of words in string : %d", words);	//display number of words in a string
	return 0;
}
