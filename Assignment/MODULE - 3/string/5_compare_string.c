//Write a program in C to compare two strings without using string library
//functions.
#include<stdio.h>
int compareStr(char ch1[], char ch2[]){
	int i=0;
	while(ch1[i] != 0 && ch2[i] != 0){
		if(ch1[i] != ch2[i]){
			return 0;
		}
		i++;
	}
	return (ch1[i] == 0 && ch2[i] == 0);
}
int main(){
	char s1[50], s2[50];
	printf("Enter a first string : ");
	scanf("%s",&s1);
	printf("Enter a second string : ");
	scanf("%s",&s2);
	if(compareStr(s1, s2)){
		printf("string is equal");
	}
	else{
		printf("string is not equal");
	}
	return 0;
}
