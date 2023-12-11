//Check Number Is Positive or Negative
#include<stdio.h>
int main(){
	int no;
	printf("Enter any number : ");
	scanf("%d",&no);
	if(no>0){
		printf("This Number Is Positive.");
	}
	else{
		printf("This Number Is Negative.");
	}
	return 0;
}
