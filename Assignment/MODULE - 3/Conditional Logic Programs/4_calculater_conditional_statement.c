//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) using conditional statement 
#include<stdio.h>
int main() {
    char operator;
    int num1, num2, result;

    printf("Enter operator (+, -, *, /, %) : ");
    scanf(" %c", &operator);
    printf("Enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("\nResult = %d", result);
    } 
	else if (operator == '-') {
        result = num1 - num2;
        printf("\nResult = %d", result);
    } 
	else if (operator == '*') {
        result = num1 * num2;
        printf("\nResult = %d", result);
    } 
	else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("\nResult: %d", result);
        } 
		else {
            printf("\nError : Division by zero is not allowed");
        }
    } 
	else if (operator == '%') {
        if (num2 != 0) {
            result = num1 % num2;
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

