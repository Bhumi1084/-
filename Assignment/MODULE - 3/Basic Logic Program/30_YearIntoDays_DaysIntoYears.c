//WAP to convert years into days and days into years
#include<stdio.h>
int main(){
	int years, days;
	printf("Enter the number of years: ");
    scanf("%d", &years);	//years = 3
    //convert years into days
	days = years * 365;		// days = 3 * 365
    //display days
	printf("\nDays = %d", days); // days = 1095
    
    printf("\nEnter the number of days: ");
    scanf("%d", &days);	// days = 1000
    //convert days into years
	years = days / 365;	// years = 1000 / 365
    //display years
	printf("\nYears = %d", years);	// years = 2
	return 0;
}
