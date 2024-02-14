//WAP to find number is even or odd using ternary operator
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");	//print message
    scanf("%d", &number);	//get value from user
    
    //check condition
    //condition are true then print number is an even 
    //condition are faulse then print number is an odd
    (number % 2 == 0) ? printf("\nnumber is an even") : printf("\nnumber is an odd");
    return 0;
}
