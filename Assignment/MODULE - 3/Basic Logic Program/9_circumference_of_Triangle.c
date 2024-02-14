//Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main(){
	int number1, number2, number3;
	printf("Enter Number1, Number2 & Number3 value : ");
	scanf("%d %d %d",&number1,&number2,&number3);	//get the three value from user		a=10, b=10, c=10
	//calculate and display circumference of triangle
	printf("circumference of Triangle : %d",number1+number2+number3);		//circumference of Triangle = 30
	return 0;
}
