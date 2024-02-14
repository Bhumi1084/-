//WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");	//print message
    scanf("%d", &number);	//get value from user
    
	//check condition 
	//number greter then 0 then print number is a positive
	//number less then 0 then print number is negative
	//condition are faulse then print number is zero
	if (number > 0) {
        printf("\nnumber is a positive");
    } 
	else if (number < 0) {
        printf("\nnumber is a negative");
    } 
	else {
        printf("number is zero");
    }
    return 0;
}

