//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int number, number1 = 0, number2 = 1, number3, i;	//declare a variable
	printf("Enter the number of terms : ");	//print message
    scanf("%d", &number);	//get value from user
    for(i = 0; i < number; i++){
    	//check condition
        if(i <= 1){
            number3 = i;
        }
		else{
			//logic for fibnacci series
            number3 = number1 + number2;
            number1 = number2;
            number2 = number3;
        }
        printf("%d ", number3);	//print series
    }
	return 0;
}
