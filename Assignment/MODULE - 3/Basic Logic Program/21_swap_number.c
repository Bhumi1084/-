//Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
#include<stdio.h>
int main(){
    int number1, number2, temp; 
    printf("swap 2 numbers with using 3rd variable.");
    printf("\nEnter two number : ");
    scanf("%d %d", &number1, &number2);	//number1 = 10, number2 = 20
    printf("Before Swappingn Number \na1 = %d\na2 = %d \n", a1, a2);	//display value
    temp = number1;	//temp = 10;
    number1 = number2;	//number1 = 20;
    number2 = temp;	//number2 = 10;
    printf("After Swappingn Number \na1= %d\na2 = %d\n", a1, a2);	//display value a1 = 20, a2 = 10

	int number_1,number_2;
	printf("\nswap 2 numbers without using 3rd variable.");
	printf("\nEnter two number : ");
	scanf("%d %d",&a,&b);	//number_1 = 10, number_2 = 20
	printf("Before Swappingn Number \na = %d \nb = %d", a, b);	//display value
	number_1 = number_1 + number_2;	//number_1 = 10 + 20 , number_1 = 30
	number_2 = number_1 - number_2;	//number_2 = 30 - 20, number_2 = 10
	number_1 = number_1 - number_2;	//number_1 = 30 - 10, number_1 = 20
	printf("\nAfter Swappingn Number \na = %d \nb = %d", a, b);	//display value number_1 = 20, number_1 = 10
	return 0;
}
