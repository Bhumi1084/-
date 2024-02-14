//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main(){
	int number1, number2;
	printf("Enter two integers value : ");
	scanf("%d %d", &number1, &number2);	//get value
	
	//check the condition
	//condition are true then print value is equal other wise goto the else part and print value is not equal
	if(number1 == number2){
		printf("This value is equal");	//print message
	}
	else{
		printf("This value is not equal");	//print message
	}
	return 0;
}
