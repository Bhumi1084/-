// Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int marks;	//declare variable
	printf("Enter subject marks :" );	//print message
	scanf("%d",&marks);	//get value
	
	//check condition marks greter then equal to 40 condition are true then print You are Pass
	//condition are faulse then print  You are Fail
	if(marks>=40){
		printf("You are Pass.");
	}
	else{
		printf("You are Fail.");
	}
	return 0;
}
