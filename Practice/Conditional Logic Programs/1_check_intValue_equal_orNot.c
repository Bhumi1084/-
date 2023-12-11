//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two integers value : ");
	scanf("%d %d", &a, &b);
	if(a == b){
		printf("This value is equal");
	}
	else{
		printf("This value is not equal");
	}
	return 0;
}
