//Write a C program to check whether a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main() {
    int a1, a2, a3;
    printf("Enter the 1 value of triangle : ");
    scanf("%d", &a1);
    printf("\nEnter the 2 value of triangle : ");
    scanf("%d", &a2);
    printf("\nEnter the 3 value of triangle : ");
    scanf("%d", &a3);

    if (a1 + a2 + a3 == 180 && a1 > 0 && a2 > 0 && a3 > 0) {
        printf("\nTriangle can be formed with the given value");
    } 
	else {
        printf("\nTriangle can not be formed with the given value");
    }
    return 0;
}
