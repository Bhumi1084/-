//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main(){
	int number, reverse, remainder;	//declare a variable
  	printf("Enter number : ");	//print message
  	scanf("%d", &number);	//get value from user
  	while(number != 0){
  		//logic for reverse number
    	remainder = number % 10;
    	reverse = reverse * 10 + remainder;
    	number = number / 10;
  	}
  	printf("Reverse number = %d", reverse);	//display for reverse number
	return 0;
}
