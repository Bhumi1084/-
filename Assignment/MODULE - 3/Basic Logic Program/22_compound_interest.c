//Calculate compound interest (Compound Interest formula:
//	a. Formula to calculate compound interest annually is given by:
//		Amount= P(1 + R/100)t
//	b. Compound Interest = Amount – P
#include<stdio.h>
int main(){
	float principal, rate, time, amount, compoundInterest;
	printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest : ");
    scanf("%f", &rate);
    printf("Enter the time : ");
    scanf("%f", &time);
    
    amount = principal *((1 + rate / 100)*time);
    printf("\nAmount = %f",amount);
    
    compoundInterest = amount - principal;
    printf("\nCompound Interest = %f",compoundInterest);
	return 0;
}
