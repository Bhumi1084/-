//WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main(){
	int year;	//declare a variable
	printf("Enter the year : ");	//print message
	scanf("%d",&year);	//get value from user
	
	//check condition 
	//condition are true to print This year is leap year 
	//condition are faulse to print This year is not leap year
	if(((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
		printf("This year is leap year");
	}
	else{
		printf("This year is not leap year");
	}
	return 0;
}
