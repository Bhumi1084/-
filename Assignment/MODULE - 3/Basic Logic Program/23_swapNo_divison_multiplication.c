//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){
	int a, b;
	printf("Enter two number : ");
	scanf("%d %d",&a,&b);
	printf("Before Swaping value. \na = %d \nb = %d",a,b);
	a = a * b; // 10*20 => 200
	b = a / b; // 200/20 => 10
	a = a / b; // 200/10 => 20
	printf("\nAfter Swaping value. \na = %d \nb = %d",a,b);
	return 0;
}
