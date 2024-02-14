//WAP to print factorial of given number
#include<stdio.h>
int main(){
	int number, i, factorial=1;	//declare variable
	printf("Enter number : ");	//print message
	scanf("%d", &number);	//get value from user
	//check condition 
	//number less then zero condition is true then print Enter only integer number
	//condition is false then calculate factorial number 
	if (number < 0){
		printf("Enter only integer number");	//print message
	}        
    else {
        for(i = 1; i <= number; i++){
            factorial = factorial * i;	//calculate factorial
        }
        printf("Factorial = %d", factorial);	//display factorial number
    }
	return 0;
}
