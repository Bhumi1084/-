//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main(){
	int base, height, answer;
	printf("Base & Height : ");
	scanf("%d %d",&base,&height);	//get a two value from user
	answer = (base * height) / 2;	//calculate the area of triangle
	printf("Area Of Triangle : %d",answer);	//display area of triangle
	return 0;
}
