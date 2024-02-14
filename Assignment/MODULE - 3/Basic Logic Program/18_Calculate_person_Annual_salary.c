//Calculate person’s Annual salary
#include<stdio.h>
int main(){
    int monthlySalary, annualSalary ,numberOfMonths = 12;
    printf("Enter the monthly salary : ");
    scanf("%d", &monthlySalary);	//get a value
    annualSalary = monthlySalary * numberOfMonths;	//calculate annual salary
    printf("\nAnnual Salary = %d", annualSalary);	//display annual salary
    return 0;
}
