//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement 
#include<stdio.h>
int main() {
	//declare a variable
    char operator;
    int number1, number2, result;

    printf("Enter operator (+, -, *, /, %) : ");	//print message
    scanf(" %c", &operator);	//get value
    printf("Enter two numbers : ");
    scanf("%d %d", &number1, &number2);	//get value

	//check condition
    if (operator == '+') {
        result = number1 + number2;		//calculate addition
        printf("\nResult = %d", result);
    } 
	else if (operator == '-') {
        result = number1 - number2;	//calculate substraction
        printf("\nResult = %d", result);
    } 
	else if (operator == '*') {
        result = number1 * number2;	//calculate multiplication
        printf("\nResult = %d", result);
    } 
	else if (operator == '/') {
		//check condition number not equal to 0 condition are true to calculate the division otherwise goto the else part
        if (number2 != 0) {
            result = number1 / number2;	//calculate the division
            printf("\nResult: %d", result);
        } 
		else {
            printf("\nError : Division by zero is not allowed");	//print message
        }
    } 
	else if (operator == '%') {
        if (number2 != 0) {
            result = number1 % number2;	//calculate modual
            printf("\nResult = %d", result);
        } 
		else {
            printf("\nError : Modulo by zero is not allowed");
        }
    } 
	else {
        printf("\nError : Invalid operator");
    }
    return 0;
}

