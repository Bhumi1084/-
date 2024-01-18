//Accept the input month number and print number of days in that month.
#include<stdio.h>
int main() {
    int mNo;
    printf("Enter the month number : ");
    scanf("%d", &mNo);

    switch (mNo) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("\nNumber of days in the month: 31");
            break;
        case 4: case 6: case 9: case 11:
            printf("\nNumber of days in the month: 30");
            break;
        case 2:
            printf("\nNumber of days in the month: 28 or 29");
            break;
        default:
            printf("\nInvalid month number");
    }
    return 0;
}

