//Calculate compound interest
#include<stdio.h>
int main(){
	float principal, rate, time, amount, compoundInterest;
	printf("Enter the principal amount: ");
    scanf("%f", &principal);	//get principal from user
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);	//get rate from user
    printf("Enter the time : ");
    scanf("%f", &time);	//get time from user
    
    amount = principal *((1 + rate / 100)*time);	//calculate amount
    printf("\nAmount = %f",amount);	//display amount
    
    compoundInterest = amount - principal;	//calculate compound interest
    printf("\nCompound Interest = %f",compoundInterest);	//display compound interest
	return 0;
}
