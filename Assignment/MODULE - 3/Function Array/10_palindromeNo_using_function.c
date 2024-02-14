//WAP to perform Palindrome number using for loop and function
#include<stdio.h>
int number1, number2, temp;	//declare variable
//create function
int palindrome(int no){
	number1 = no;	//assign value
	number2 = 0;
	
	while(no > 0){
		temp = no%10;
		number2 = number2 * 10 + temp;
		no /= 10;
	}
	return number1 == number2;	
}

int main(){
	int number1;	//declare variable 
	printf("Enter a number : ");	//print message
	scanf("%d",&number1);	//get value from user
	
	if(palindrome(number1)){
		printf("no is palindrome");
	}
	else{
		printf("no is not palindrome");
	}
	return 0;
}
