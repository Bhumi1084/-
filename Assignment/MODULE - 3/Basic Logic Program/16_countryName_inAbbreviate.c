//Convert country’s name in abbreviate form
#include<stdio.h>
int main(){
	char countrynm[20];
	printf("Enter the country name : ");	//print the message
	scanf("%s",&countrynm);	//get value
	printf("Abbreviate name is : %c%c",countrynm[0],countrynm[1]);	//convert country name to abbreviate and display abbreviate
	return 0;
}
