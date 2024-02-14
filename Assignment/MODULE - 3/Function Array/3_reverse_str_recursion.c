//WAP to find reverse of string using recursion
#include <stdio.h>
char temp;	//declare variable
//create function without return type but with parameter
void reverse_String(char character[], int start, int end) {
	//check condition
    if (start >= end) {
        return;
    }
    temp = character[start];	
    character[start] = character[end];
    character[end] = temp;
    reverse_String(character, start + 1, end - 1);	//call function
}
int main() {
    char input_String[100];	//declare variable or create array
    printf("\nEnter a string = ");	//print message
    scanf("%s", &input_String);	//get value from user

    int length = 0;	//	declare variable
    while (input_String[length] != 0) {
        length++;
    }
    reverse_String(input_String, 0, length - 1);	//call function
    printf("\nReverse string = %s", input_String);	//display Reverse string
    return 0;
}
