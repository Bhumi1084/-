//WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
int main(){
	int number1, number2;
	printf("Enter two number : ");
	scanf("%d %d",&number1,&number2);	//number1=10, number2=20
	printf("Before Swaping value. \nnumber1 = %d \nnumber2 = %d",number1,number2);
	number1 = number1 * number2; // 10*20 => 200
	number2 = number1 / number2; // 200/20 => 10
	number1 = number1 / number2; // 200/10 => 20
	printf("\nAfter Swaping value. \na = %d \nb = %d",number1,number2);	//dispaly number1=20, number2=10
	return 0;
}
