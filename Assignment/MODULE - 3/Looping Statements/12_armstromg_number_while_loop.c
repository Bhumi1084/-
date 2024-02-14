//Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
int main(){
	int number,c,armstrong=0,b;	//declare a variable
	printf("Enter a number : ");	//print message
	scanf("%d",&number);	//get value from user
	c= number;
	armstrong=0;
	while(number>0){
		//logic for armstrong number
		b = number % 10;
		armstrong = (armstrong) + (b * b * b);
		number = number / 10;
	}
	
	//check condition
	//condition is true then print It is armstrong number other wise print It is not armstrong number
	if(c == armstrong){
		printf("It is armstrong number");	//print message
	}
	else{
		printf("It is not armstrong number");
	}
	return 0;
}
