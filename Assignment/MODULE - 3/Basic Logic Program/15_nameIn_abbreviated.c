//Convert school’s name in abbreviated form
#include<stdio.h>
int main(){
	char name[20];
	printf("Enter the school name : ");
	scanf("%s",&name);	//get school name
	printf("Abbreviate name is : %c%c",name[0],name[1]);	//converting school name in abbreviated and display
	return 0;
}
