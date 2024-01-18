//WAP to convert years into days and days into years
#include<stdio.h>
int main(){
	int years, days;
	printf("Enter the number of years: ");
    scanf("%d", &years);
    days = years * 365;
    printf("\nDays = %d", days);
    
    printf("\nEnter the number of days: ");
    scanf("%d", &days);
    years = days / 365;
    printf("\nYears = %d", years);
	return 0;
}
