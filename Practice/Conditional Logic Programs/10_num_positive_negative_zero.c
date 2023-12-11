//WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        printf("\nnumber is a positive");
    } 
	else if (num < 0) {
        printf("\nnumber is a negative");
    } 
	else {
        printf("number is zero");
    }
    return 0;
}

