//Write a program in C to calculate and print the electricity bill of a given
//customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the
//customer. The charge are as follow :
//	20. Unit 								21. Charge/unit
//	22. upto 350 							23. @1.20
//	24. 350 and above but less than 600 	25. @1.50
//	26. 600 and above but less than 800 	27. @1.80
//	28. 800 and above 						29. @2.00
//	30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and
//		the minimum bill should be of Rs. 256/-
#include<stdio.h>
int main(){
	int id;	//declare variable to store integer value
	char nm;	//declare variable to store character value
	float unit, totalAmount, surcharge = 0;	//declare variable to store float value or
	printf("Enter customer Id Name and Unit : ");
	scanf("%d %s %f",&id, &nm, &unit);	//get value from user
	
	//check the condition
	if(unit<350){
		//check the condition
		if(unit<=256){
			totalAmount = 256;
        	printf("Your Bill = %f",totalAmount);	//Display bill amount for units less than or equal to 256
		}
		else{
			totalAmount = unit * 1.20;
			printf("Your Bill = %f",totalAmount);	//Display bill amount for units greater than 256
		}	
	}
	else if(unit>=350 && unit<600){
		totalAmount = unit * 1.50;
		printf("Your Bill = %f",totalAmount);	//Display bill amount for units between 350 and 599
	}
	else if(unit>=600 && unit<800){
		totalAmount = unit * 1.80;
		printf("Your Bill = %f",totalAmount);	//Display bill amount for units between 600 and 799
	}
	else{
		totalAmount = unit * 2.00;
		surcharge = 0.18 * totalAmount;
		totalAmount += surcharge;
		printf("Your Bill = %f",totalAmount);	//Display bill amount for units 800 and above with surcharge
	}
//	if (totalAmount > 800) {
//        surcharge = 0.18 * totalAmount;
//        totalAmount += surcharge;
//        printf("Your Bill = %f",totalAmount);
//    }
	return 0;
}
