//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int length, i, j, temp;	//declare a variable
//create a function
void reverse_string(char character[]){
	length = strlen(character);	
	for(i=0; i<length/2; i++){
		temp = character[i];
		character[i] = character[length-1-i];
		character[length-1-i] = temp;
	}
}

//create function
int palindrome(char character[]){
	length = strlen(character);
	i = 0;
	j = length-1;
	
	while(i<j){
		//check condition
		if(character[i] != character[j]){
			return 0;
		}
		i++;	//increment 
		j--;	//decrement
	}
	return 1;
}

int main(){
	char string[50];	//create array
	printf("Enter a string : ");
	scanf("%s",&string);	//get a value from user
	reverse_string(string);	//call a function
	printf("\nReverse string : %s", string);	//display string
	//check condition
	if(palindrome(string)){
		printf("\nstring is palindrome");
	}
	else{
		printf("\nstring is not palindrome");
	}
	return 0;
}
