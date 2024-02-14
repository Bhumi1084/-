//Calculate compound interest (Compound Interest formula:
//	a. Formula to calculate compound interest annually is given by:
//		Amount= P(1 + R/100)t
//	b. Compound Interest = Amount – P
#include<stdio.h>
int main(){
	float principal, rate, time, amount, compoundInterest;	//declare variable
	printf("Enter the principal amount: ");
    scanf("%f", &principal);	//get value ex: principal = 500
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);	//get value ex: rate = 12
    printf("Enter the time : ");
    scanf("%f", &time);	// get time ex: time = 2
    
    amount = principal *((1 + rate / 100)*time);	//calculate amount ex: amount = 500*((1+12/100)*2
    printf("\nAmount = %f",amount);	//display amount ex: amount = 1120.00
    
    compoundInterest = amount - principal;	//calculate compound interest ex: compound interest = 1120.00 - 500
    printf("\nCompound Interest = %f",compoundInterest);	//display compound interest ex: compound interest = 620.00
	return 0;
}
