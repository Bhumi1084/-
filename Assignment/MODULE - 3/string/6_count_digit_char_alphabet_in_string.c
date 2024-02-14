//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
void countChar(char character[], int alphabets, int digits, int special_character){
	int i;	//create variable
	for(i=0; character[i] != 0; i++){
		//check condition
		//condition are true then increment in alphabets
		//if condition are false then check else if condition this condition are true then increment digits
		//if and else if both condition are false then goto else part and increment special character
		if((character[i] >= 'A' && character[i] <= 'Z') || (character[i] >= 'a' && character[i] <= 'z')){
			alphabets++;	//increment alphabets
		}
		else if(character[i] >= '0' && character[i] <= '9'){
			digits++;	//increment digit
		}
		else{
			special_character++;	//increment special character
		}
	}
	printf("\nalphabets : %d",alphabets);	//display alphabets
	printf("\ndigits : %d",digits);	//display digits
	printf("\nspecial characters : %d",special_character);	//display special character
}
int main(){
	char string[50];	//create an array
	int alphabets1=0, digits1=0, special_character1=0;	//create a variable
	printf("Enter a string : ");
	scanf("%s",&string);	//get a value from user
	countChar(string, alphabets1, digits1, special_character1);	//call function
	return 0;
}
