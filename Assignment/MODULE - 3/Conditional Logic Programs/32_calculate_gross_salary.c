//Write a C program to input basic salary of an employee and calculate
//its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>
int main() {
	//declare a variable
    float basicSalary, hra, da, grossSalary;
    printf("\nEnter basic salary : ");
    scanf("%f", &basicSalary);		//get a value from user
    //check basicsalary less then equal to 10000 to calculate the HRA = 20%, DA = 80% otherwise goto the elseif part
	if (basicSalary <= 10000) {
        hra = 0.2 * basicSalary;
        da = 0.8 * basicSalary;
    } 
    //check basicsalary less then equal to 20000 to calculate the HRA = 25%, DA = 90% otherwise goto the else part
	else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.9 * basicSalary;
    } 
	else {
		//calculate the HRA = 30%, DA = 95%
        hra = 0.3 * basicSalary;
        da = 0.95 * basicSalary;
    }
    printf("\nBasic Salary: %.2f", basicSalary);	//print basic salary
    grossSalary = basicSalary + hra + da;	//calculate grossSalary
    printf("\nHRA = %.2f",hra);	//display HRA
    printf("\nDA = %.2f",da);	//display DA
    printf("\nGross Salary: %.2f", grossSalary);	//display gross salary
    return 0;
}
