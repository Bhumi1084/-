//Write a program you have to make a summation of first and last Digit. (E.g.,
//1234 Ans: -5)
#include<stdio.h>
int main(){
	int number, firstNumber, lastNumber, sum;	//declare a variable
	printf("Enter a number : ");	//print message
	scanf("%d",&number);	//get value from user
	
	//logic for sum of last and first digit
	lastNumber = number % 10;
	while(number>=10){
		number = number / 10;
	}
	firstNumber = number;
	sum = firstNumber + lastNumber;	//calculate for first and last digit
	
	printf("\nsummation = %d",sum);	//display for summation
	return 0;
}
