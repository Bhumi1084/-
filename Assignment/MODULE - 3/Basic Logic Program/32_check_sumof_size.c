//Accept 2 numbers and find out its sum check it size
#include <stdio.h>
int main() {
    int number1, number2, sum;
    printf("Enter the first number: ");
    scanf("%d", &number2);	//number1 = 10
    printf("\nEnter the second number: ");
    scanf("%d", &number2);	//number2 = 20
    //calculate sum
	sum = number1 + number2;	//sum = 10 + n20
    //display sum
	printf("\nSum: %d", sum);	//sum = 30
    //display size of sum
	printf("\nSize of the sum: %d", sizeof(sum));	//size of sum = 4
    return 0;
}

