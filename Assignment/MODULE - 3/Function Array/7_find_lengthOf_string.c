//WAP Find out length of string without using inbuilt function
#include<stdio.h>
int main(){
	char character[50];	//create array
	int i, length = 0;	//declare a variable
	printf("Enter a string : ");
	scanf("%s", &character);	//get value from user
	for(i=0; character[i]!=0; i++){
		length++;	//increment in length
	}
	printf("\n Length of String : %d", length);	//display length
	return 0;
}
