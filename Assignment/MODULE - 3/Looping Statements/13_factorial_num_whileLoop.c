//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main(){
	int number,i,factorial=1;	//declare a variable
	printf("Enter a number : ");	//print message
	scanf("%d",&number);	//get value from user
	i=number;
	while(i>=1){
		//logic for factorial number
		factorial = factorial * i;
		i--;	//decrement
	}
	printf("Factorial = %d",factorial);	//display number
	return 0;
}
