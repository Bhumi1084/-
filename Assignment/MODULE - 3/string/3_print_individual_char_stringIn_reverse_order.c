//Write a program in C to print individual characters of a string in 
//reverse order
#include<stdio.h>
#include<string.h>
int main(){
	char ch[50], i;	//create variable and ch[50] is create array
	printf("Enter a string : ");
	scanf("%s", &ch);	//get value from user
	printf("Invidual character from the string in reverse order : \n");
	for(i=strlen(ch) - 1; i>=0; i--){
		printf("%c\n",ch[i]);	//print characters
	}
	return 0;
}
