//Write a program in C to combine two strings manually
#include<stdio.h>
int main(){
	char first_string[30], second_string[30];	//create array
	int i, j;
	printf("First string : ");
	scanf("%s", &first_string);	//get value from user
	printf("Second string : ");
	scanf("%s", &second_string);	//get value from user
	
	//Find the end of the first string
	for(i=0; first_string[i] != 0; i++){
	}
	//Concatenate the second string to the first string
	for(j=0; second_string[j] != 0; j++){
		first_string[i] = second_string[j];	//copy characters from second string to first string
		i++;	//move to the next position in the first string
	}
	first_string[i] = 0;	//add null terminator to mark the end of the combined string
	printf("combine string : %s",first_string);	//display combine string
	return 0;
}
