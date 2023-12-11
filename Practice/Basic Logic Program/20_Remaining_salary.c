//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary
#include<stdio.h>
int main(){
	float monthlySalary, insurancePremium, loanInstallment, remainingSalary;
	printf("Enter the monthly salary : ");
    scanf("%f", &monthlySalary);
    
	insurancePremium = 0.10 * monthlySalary;
	printf("\nInsurance premium = %f",insurancePremium);
	
	loanInstallment = 0.10 * monthlySalary;
	printf("\nLoan Installment = %f",loanInstallment);
	
	remainingSalary = monthlySalary - insurancePremium - loanInstallment;
	printf("\nRemaining Salary = %f",remainingSalary);
}
