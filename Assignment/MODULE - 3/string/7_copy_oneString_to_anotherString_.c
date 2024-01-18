//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main(){
	char ch1[50], ch2[50];
	printf("Enter a string : ");
	scanf("%s",&ch1);
	strcpy(ch2,ch1);
	printf("copy string : %s",ch2);
	return 0;
}
