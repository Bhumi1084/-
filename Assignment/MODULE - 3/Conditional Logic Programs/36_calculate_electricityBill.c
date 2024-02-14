//Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill
#include<stdio.h>
int main(){
	//declare a variable
    float unitCharges, totalBill;
    
    printf("Enter the electricity unit charges : ");
    scanf("%f", &unitCharges);	//get value from user
    
    //check unit charges is less then equal to 50, condition is true calculate the total bill or condition is fulase to chech elsif condition
    if (unitCharges <= 50) {	
        totalBill = unitCharges * 0.50;
    } 
    //check unitcharges are less then equal to 150, condition is true calculate the total bill or condition is fulase to chech elsif condition
	else if (unitCharges <= 150) {
        totalBill = unitCharges * 0.75;
    } 
    //check unitcharges are less then equal to 250, condition is true calculate the total bill or condition is fulase to go to the else part
	else if (unitCharges <= 250) {
        totalBill =  unitCharges * 1.20;
    } 
	else {
        totalBill = unitCharges * 1.50;
    }
  
    totalBill = totalBill + 0.20 * totalBill;	//calculate totalbill
    printf("\nTotal bill = %f", totalBill);		//print total bill
	return 0;
}
