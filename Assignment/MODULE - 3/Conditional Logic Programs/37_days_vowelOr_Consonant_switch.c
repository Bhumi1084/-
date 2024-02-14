//.WAP to show
//i. Monday to Sunday using switch case
//ii. Vowel or Consonant using switch case
#include<stdio.h>
int main() {
    //i: Monday to Sunday using switch case
    int dayNo;
    printf("Enter the day number : ");
    scanf("%d", &dayNo);	//get value		dayNo = 4
    //switch case used to choice any one option
	switch (dayNo) {
        case 1:
            printf("\nMonday");
            break;		//break this case
        case 2:
            printf("\nTuesday");
            break;
        case 3:
            printf("\nWednesday");
            break;
        case 4:
            printf("\nThursday");	//print the Thursday
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
    char character;
    printf("\nEnter a character: ");	
    scanf(" %c", &character);		//get value		character = a
    //check the character is vowel or not
    switch (character) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("\nThe character is a vowel");	//print The character is a vowel
            break;		//break this case
        default:
            printf("\nThe character is a consonant");
    }
    return 0;
}
