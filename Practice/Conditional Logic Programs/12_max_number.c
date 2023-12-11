//WAP to find maximum number among 3 numbers using ternary operator
#include <stdio.h>
int main() {
    int num1, num2, num3, max;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : 
	((num2 > num3) ? num2 : num3);

    printf("\nThe maximum number is: %d", max);
    return 0;
}

