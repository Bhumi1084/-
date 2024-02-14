//Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary
#include<stdio.h>
int main(){
	//declare a variable
	float monthlySalary, insurancePremium, loanInstallment, remainingSalary;
	printf("Enter the monthly salary : ");
    scanf("%f", &monthlySalary);	//get monthly salary from user
    
	insurancePremium = 0.10 * monthlySalary;	//calculate insurance premium
	printf("\nInsurance premium = %f",insurancePremium);	//display insurance premium
	
	loanInstallment = 0.10 * monthlySalary;	//calculate loan installment
	printf("\nLoan Installment = %f",loanInstallment);	//display loan installment
	
	remainingSalary = monthlySalary - insurancePremium - loanInstallment;	//calculate remaining salary
	printf("\nRemaining Salary = %f",remainingSalary);	//display remaining salary
}
