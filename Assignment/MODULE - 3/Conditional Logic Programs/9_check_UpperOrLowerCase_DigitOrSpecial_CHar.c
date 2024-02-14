//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>
int main() {
    char character;	
    printf("Enter a character: "); //print message
    scanf("%c", &character);	//get value from user
    
    //check condition
    //character are greter then equal to 'A' and 
	//character are less then equal to 'Z' then print character is a Uppercase Alphabet
	//other wise print character is a Lowercase Alphabet
	//character greter then equal to '0' and character less then equal to '9' then print character is a Digit
	//condition are faulse then are print character is a Special Character
	
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) 
	{
		//character are greter then equal to 'A' and 
		//character are less then equal to 'Z' then print character is a Uppercase Alphabet
		//other wise print character is a Lowercase Alphabet
        if (character >= 'A' && character <= 'Z') 
		{
            printf("\n%c is a Uppercase Alphabet", character);
        } 
		else 
		{
            printf("\n%c is a Lowercase Alphabet", character);
        }
    } 
	else if (character >= '0' && character <= '9') 
	{
        printf("\n%c is a Digit", character);
    } 
	else 
	{
        printf("\n%c is a Special Character", character);
    }
    return 0;
}

