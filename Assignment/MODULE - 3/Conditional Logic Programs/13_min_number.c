//WAP to find minimum number among 3 numbers using ternary operator 
#include <stdio.h>
int main() {
    int number1, number2, number3, minimum_number;
    printf("Enter 3 numbers : ");	//print message
    scanf("%d %d %d", &number1, &number2, &number3);	//get value from user

	//check condition
    minimum_number = (number1 < number2) ? ((number1 < number3) ? number1 : number3) : ((number2 < number3) ? 
	number2 : number3);

    printf("The minimum number is: %d\n", minimum_number);	//display minimum number
    return 0;
}

