//Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
int main() {
    int number, i = 1, sum = 0;	//declare a variable
    
    printf("Enter a number : ");
    scanf("%d", &number);	//get value from user
    
    while (i <= number) {
        sum = sum + i;	//calculate sum of natural number
        i++;	//increment number
    }
    printf("Sum = %d", sum);	//display sum
    return 0;
}

