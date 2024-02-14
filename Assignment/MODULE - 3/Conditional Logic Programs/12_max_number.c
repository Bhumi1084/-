//WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
int main() {
    int number1, number2, number3, max_number;
    printf("Enter 3 numbers : ");	//print message
    scanf("%d %d %d", &number1, &number2, &number3);	//get value from user
    
    //check condition
    max_number = (number1 > number2) ? ((number1 > number3) ? number1 : number3) : 
	((number2 > number3) ? number2 : number3);

    printf("\nThe maximum number is: %d", max_number);	//display maximum number
    return 0;
}

