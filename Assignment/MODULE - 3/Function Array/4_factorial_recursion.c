//WAP to find factorial using recursion
#include <stdio.h>
//create a function with return type and with parameter
int factorial(int number){
	//check condition, condition are true then return 1 
	//condition are false then return calculate factorial
    if(number == 0 || number == 1){
        return 1;
    }
	else{
        return number * fact(number - 1);
    }
}

int main() {
    int number,factorial1;	//declare a variable
    printf("Enter a number = ");	//print message
    scanf("%d", &number);	//get value

	//check condition, number less then zero condition are true then print Enter valid number
    //condition are false then calculate factorial and display factorial
	if(number < 0){
        printf("\nEnter valid number");
    } 
	else{
        factorial1 = factorial(number);	//calculate factorial
        printf("\nFactorial = %d", factorial1);	//display factorial
    }
    return 0;
}
