//Calculate person’s Annual salary
#include<stdio.h>
int main(){
    int monthlySalary, annualSalary ,numberOfMonths = 12;

    printf("Enter the monthly salary : ");
    scanf("%d", &monthlySalary);
    annualSalary = monthlySalary * numberOfMonths;
    printf("\nAnnual Salary = %d", annualSalary);
    return 0;
}
