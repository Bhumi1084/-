//.WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case
#include<stdio.h>
int main() {
    //i: Monday to Sunday using switch case
    int dayNo;
    printf("Enter the day number : ");
    scanf("%d", &dayNo);
    switch (dayNo) {
        case 1:
            printf("\nMonday");
            break;
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:
            printf("\nInvalid day number");
    }

    //ii:Vowel or Consonant using switch case
    char ch;
    printf("\nEnter a character: ");
    scanf(" %c", &ch);
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("\nThe character is a vowel");
            break;
        default:
            printf("\nThe character is a consonant");
    }
    return 0;
}
