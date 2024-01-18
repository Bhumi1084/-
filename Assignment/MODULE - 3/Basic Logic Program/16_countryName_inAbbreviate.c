//Convert country’s name in abbreviate form
#include<stdio.h>
int main(){
	char countrynm[20];
	printf("Enter the country name : ");
	scanf("%s",&countrynm);
	printf("Abbreviate name is : %c%c",countrynm[0],countrynm[1]);
	return 0;
}
