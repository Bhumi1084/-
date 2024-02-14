//Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>
//create a function
void substring(char ch[], char destination[], int start, int length) {
    int i, j;	//declare a variable
    for (i = start, j = 0; i < start + length && ch[i] != 0; i++, j++) {
        destination[j] = ch[i];	//extract a string
    }
    destination[j] = 0;
}

int main(){
    char string1[100], string2[100];	//create an array
    int start_index, length1;	//create a variable
    printf("Enter a string : ");
    scanf("%s", &string1);	//get value from user

    printf("\nEnter the starting index of the substring : ");
    scanf("%d", &start_index);	//get value from user

    printf("\nEnter the length of the substring : ");
    scanf("%d", &length1);	//get value from user
    substring(string1, string2, s, length1);	//call function

    printf("\nExtract substring : %s", substring);	//display extract substring
    return 0;
}
