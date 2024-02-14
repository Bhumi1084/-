//Write a program in C to compare two strings without using string library functions.
#include<stdio.h>
int compareStr(char character1[], char character2[]){
	int i=0;	//create variable
	//logic for compare two string
	while(character1[i] != 0 && character2[i] != 0){
		//check condition
		if(character1[i] != character2[i]){
			return 0;
		}
		i++;	//increment
	}
	return (character1[i] == 0 && character2[i] == 0);
}
int main(){
	char string1[50], string2[50];	//create array
	printf("Enter a first string : ");
	scanf("%s",&string1);	//get value from user
	printf("Enter a second string : ");
	scanf("%s",&string2);	//get value from user
	
	//check condition string is equal or not
	if(compareStr(string1, string2)){
		printf("string is equal");
	}
	else{
		printf("string is not equal");
	}
	return 0;
}
