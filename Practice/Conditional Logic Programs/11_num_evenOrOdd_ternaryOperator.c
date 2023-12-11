//WAP to find number is even or odd using ternary operator
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("\nnumber is an even") : printf("\nnumber is an odd");
    return 0;
}
