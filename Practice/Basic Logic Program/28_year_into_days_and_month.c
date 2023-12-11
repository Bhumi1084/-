//Convert years into days and months
#include<stdio.h>
int main(){
	int year, day, month;
	printf("Enter the number of years: ");
    scanf("%d", &year);
    day = year * 365;
    month = year * 12;
    printf("Days = %d \nMonths = %d", day, month);
    return 0;
}
