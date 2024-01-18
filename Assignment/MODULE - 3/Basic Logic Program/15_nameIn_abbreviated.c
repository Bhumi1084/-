//Convert school’s name in abbreviated form
#include<stdio.h>
int main(){
	char nm[20];
	printf("Enter the school name : ");
	scanf("%s",&nm);
	printf("Abbreviate name is : %c%c",nm[0],nm[1]);
	return 0;
}
