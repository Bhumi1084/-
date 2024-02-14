//Write a program in C to read any Month Number in integer and display the 
//number of days for this month.
#include <stdio.h>
int main() {
    int number;	//declare a variable and store the value
    printf("Enter the month number : ");
    scanf("%d", &number);	//get value from user

	//check the month number and display the number of days accordingly
    if (number == 1 || number == 3 || number == 5 || number == 7 || number == 8 || 
	number == 10 || number == 12) {
        printf("\nNumber of days in the month: 31");
    } 
	else if (number == 4 || number == 6 || number == 9 || number == 11) {
        printf("\nNumber of days in the month: 30");
    } 
	else if (number == 2) {
        printf("\nNumber of days in the month: 28 or 29 (leap year)");
    } 
	else {
        printf("\nInvalid month number");	//display message for invalid entered number
    }
    return 0;
}

