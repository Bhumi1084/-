//Convert years into days and months
#include<stdio.h>
int main(){
	int year, day, month;
	printf("Enter the number of years: ");
    scanf("%d", &year);	//get a year   ex: 2
    day = year * 365;	//convert years into days  ex: day = 2 * 365
    month = year * 12;	//convert year into month  ex: month = 2 * 12
    //display days and month
    printf("Days = %d \nMonths = %d", day, month);	//Days = 730, Months = 24
    return 0;
}
