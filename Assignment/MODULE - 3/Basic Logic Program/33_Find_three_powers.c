//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
	int number1,number2,number3;
	printf("Enter the number : ");
	scanf("%d",&number1);	//number1 = 2
	
	//calculate power of given value and display first three power
	printf("\nN^1 = %d",number1);	//number1 = 2
	
	number2 = number1 * number1;	// number2 = 2 * 2
	printf("\nN^2 = %d",number2);	//number2 = 4
	
	number3 = number1 * number1 * number1;	// number3 = 2 * 2 * 2
	printf("\nN^3 = %d",number3);	//number3 = 8
	return 0;
}
