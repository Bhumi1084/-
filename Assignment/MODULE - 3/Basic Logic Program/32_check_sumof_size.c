//Accept 2 numbers and find out its sum check it size
#include <stdio.h>
int main() {
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("\nEnter the second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("\nSum: %d", sum);
    printf("Size of the sum: %d", sizeof(sum));
    return 0;
}

