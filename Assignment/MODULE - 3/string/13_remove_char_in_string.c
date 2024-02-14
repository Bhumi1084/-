//Write a program in C to remove characters from a string except alphabets.
#include<stdio.h>
int main(){
	char string[50];	//create an array
	int i, j;	//create variable
	printf("Enter a string : ");
	gets(string);	//get value from user
	for(i=0; string[i] != 0; i++){
		//Check if the current character is not an alphabet
		while(!((string[i] >= 'a' && string[i] <= 'z') || 
		(string[i] >= 'A' && string[i] <= 'Z') || string[i] == 0)){
			for(j=i; string[j] != 0; j++){
				string[j] = string[j+1];
			}
			string[j] = 0;	//add null terminator to mark the end of the string
		}
	}
	//Display the modified string with removed characters
	printf("Remove characters from string : ");
	puts(string);
	return 0;
}
