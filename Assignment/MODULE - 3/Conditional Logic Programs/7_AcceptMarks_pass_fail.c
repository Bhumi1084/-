// Accept marks from user and check pass or fail
#include<stdio.h>
int main(){
	int marks;
	printf("Enter subject marks :" );
	scanf("%d",&marks);
	if(marks>=40){
		printf("You are Pass.");
	}
	else{
		printf("You are Fail.");
	}
	return 0;
}
