//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main(){
    // Constants for premium calculation
	int salary;
	float insurance_pre;
	printf("Enter the salary : ");
	scanf("%d",&salary);	//get the value from user
	insurance_pre = 0.10 * salary;	//calculate person insurance premium based
	printf("Insurance Premium Based On Salary : %f",insurance_pre);	//display insurance premium salary
	return 0;
}
