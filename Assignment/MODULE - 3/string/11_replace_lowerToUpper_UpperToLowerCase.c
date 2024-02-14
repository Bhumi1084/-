//Write a program in C to read a sentence and replace lowercase characters with
//uppercase and vice versa.
#include <stdio.h>
//create a function
char replaceCase(char ch){
	//check condition 
	//condition are true then replace sentence upper to lower and vice versa
	//condition are false then return character
    if(ch >= 'a' && ch <= 'z'){
        return ch - ('a' - 'A');
    }
	else if(ch >= 'A' && ch <= 'Z'){
        return ch + ('a' - 'A');
    }
	else{
        return ch;
    }
}

int main(){
	//declare a variable and string1[100] is creat an array
    char string1[100], character;
    int i = 0, j;
    printf("Enter a string : ");
    //logic for replace lowercase characters with uppercase and vice versa
	while ((character = getchar()) != '\n' && i < sizeof(string1) - 1) {
		string1[i++] = character;
    }
    string1[i] = 0;
    for (j = 0; string1[j] != 0; j++) {
        string1[j] = replaceCase(string1[j]);	//call function
    }
    printf("\nReplace string : %s", string1);	//display replace string
    return 0;
}
