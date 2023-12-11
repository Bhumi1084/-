//WAP to convert the week into days and days into week
#include<stdio.h>
int main(){
	int week, days, years, months;
	printf("Enter the no of week : ");
	scanf("%d",&week);
	days = week * 7;
	printf("\nno of days %d",days);
	
    printf("\nEnter a days : ");
    scanf("%d",&days);
    years = days/365;
    week = days/7;
    months = days/30;   
    printf("Years: %d\n", years);
    printf("Week: %d\n", week);
    printf("Months: %d \n", months);
    return 0;
}
