//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
int len, i, j, temp;
void rstr(char ch[]){
	len = strlen(ch);
	for(i=0; i<len/2; i++){
		temp = ch[i];
		ch[i] = ch[len-1-i];
		ch[len-1-i] = temp;
	}
}

int palindrome(char ch[]){
	len = strlen(ch);
	i = 0;
	j = len-1;
	while(i<j){
		if(ch[i] != ch[j]){
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}

int main(){
	char str[50];
	printf("Enter a string : ");
	scanf("%s",&str);
	rstr(str);
	printf("\nReverse string : %s", str);
	if(palindrome(str)){
		printf("\nstring is palindrome");
	}
	else{
		printf("\nstring is not palindrome");
	}
	return 0;
}
