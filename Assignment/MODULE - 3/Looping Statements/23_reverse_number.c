//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
	int number, reverse, sum = 0, i;	//declare a variable
    printf("Input a number: ");	//print message
    scanf("%d", &number);	//get value from user
    for(i=number; number!=0; number=number/10){
    	//logic for reverse number
         reverse = number % 10; 
         sum = sum * 10 + reverse;
    }
    printf("\nReverse Number = %d", sum);	//print reverse number
	return 0;
}
