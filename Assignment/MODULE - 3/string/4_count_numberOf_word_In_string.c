//Write a program in C to count the total number of words in a string
#include<stdio.h>
#include<string.h>
int main(){
	char s[50];
	int words = 0, i;
	printf("Enter a string : ");
	gets(s);
	for(i=0; s[i]; i++){
		if(s[i]==32){
			words++;
		}
	}
	if(i>0){
		words++;
	}
	printf("no of words in string : %d", words);
	return 0;
}
