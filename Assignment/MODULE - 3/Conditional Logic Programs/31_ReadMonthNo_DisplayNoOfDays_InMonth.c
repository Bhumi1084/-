//Write a program in C to read any Month Number in integer and display the 
//number of days for this month.
#include <stdio.h>
int main() {
    int no;
    printf("Enter the month number : ");
    scanf("%d", &no);

    if (no == 1 || no == 3 || no == 5 || no == 7 || no == 8 || 
	no == 10 || no == 12) {
        printf("\nNumber of days in the month: 31");
    } 
	else if (no == 4 || no == 6 || no == 9 || no == 11) {
        printf("\nNumber of days in the month: 30");
    } 
	else if (no == 2) {
        printf("\nNumber of days in the month: 28 or 29 (leap year)");
    } 
	else {
        printf("\nInvalid month number");
    }
    return 0;
}

