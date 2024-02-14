//Find the Character Is Vowel or Not
#include <stdio.h>
int main() {
    char character;
    printf("Enter a character: ");	//print message
    scanf(" %c", &character);	//get value
    
    //check condition 
    //condion are true then print character is a vowel
    //condition are faulse then print character is not a vowel
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' ||
        character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') 
	{
        printf("%c is a vowel.\n", character);
    }
	else 
	{
        printf("%c is not a vowel.\n", character);
    }
    return 0;
}

