//Find character value from ascii
#include<stdio.h>
int main(){
	int number;
	char character;
	printf("Enter ascii code : ");	
	scanf("%d",&number);	//get value		no=65
	character = (char)number;	//Find character from given ascii
	printf("char = %c",character);	//display character		A
	return 0;	
}
