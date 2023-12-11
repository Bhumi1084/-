//Accept 2 numbers from user and swap 2 without using 3rd variable
#include<stdio.h>
int main(){
	int a,b;
	printf("\nswap 2 numbers without using 3rd variable.");
	printf("\nEnter two number : ");
	scanf("%d %d",&a,&b);
	printf("Before Swappingn Number \na = %d \nb = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swappingn Number \na = %d \nb = %d", a, b);
	return 0;
}

