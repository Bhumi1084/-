//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main(){
	int b, h, a;
	printf("Base & Height : ");
	scanf("%d %d",&b,&h);
	a = (b * h) / 2;
	printf("Area Of Triangle : %d",a);
	return 0;
}
