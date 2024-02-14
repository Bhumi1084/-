//Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>

int main() {
    char string[100];	//create an array
    int max_character;	//create a variable
    printf("Enter a string: ");
    int i = 0;
    char ch;
    
    //logic for maximum number of characters in a string
    while((ch = getchar()) != '\n' && i < sizeof(string) - 1){
        string[i++] = ch;
    }

    string[i] = 0;
    max_character = i;
    printf("\nMaximum number of characters in the string: %d", max_character);	//display Maximum number of characters in the string
    return 0;
}
