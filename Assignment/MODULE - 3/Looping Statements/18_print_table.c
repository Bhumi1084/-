//Write a C Program to Print the Multiplication Table of N
//	i. E.g. 5 * 1 = 5
//	ii. 5 * 2 = 10
//		1. .
//		2. .
//	iii. 5 * 10 = 50
#include <stdio.h>
int main() {
    int number,i;
    printf("Enter the table number: ");
    scanf("%d", &number);	//get value from user
    
    for (i = 1; i <= 10; i++) {
        printf("\n%d * %d = %d", number, i, number * i);	//calculate multiplication table and display table
    }
    return 0;
}
