//Check Number Is Positive or Negative
#include<stdio.h>
int main(){
	int number;
	printf("Enter any number : ");
	scanf("%d",&number);	//get value
	
	//check condition number greter then 0 condition is true then print This Number Is Positive
	//or condition are faulse then print This Number Is Negative
	if(number>0){
		printf("This Number Is Positive.");
	}
	else{
		printf("This Number Is Negative.");
	}
	return 0;
}
