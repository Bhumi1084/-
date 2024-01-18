//Write a program in C to print individual characters of a string in 
//reverse order
#include<stdio.h>
#include<string.h>
int main(){
	char ch[50], i;
	printf("Enter a string : ");
	scanf("%s", &ch);
	printf("Invidual character from the string in reverse order : \n");
	for(i=strlen(ch) - 1; i>=0; i--){
		printf("%c\n",ch[i]);
	}
	return 0;
}
