//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
	{
        if (ch >= 'A' && ch <= 'Z') 
		{
            printf("\n%c is a Uppercase Alphabet", ch);
        } 
		else 
		{
            printf("\n%c is a Lowercase Alphabet", ch);
        }
    } 
	else if (ch >= '0' && ch <= '9') 
	{
        printf("\n%c is a Digit", ch);
    } 
	else 
	{
        printf("\n%c is a Special Character", ch);
    }
    return 0;
}

