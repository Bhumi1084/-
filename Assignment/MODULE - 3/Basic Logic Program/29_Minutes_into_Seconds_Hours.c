//Convert minutes into seconds and hours
#include<stdio.h>
int main(){
	int minutes, hours, seconds;
	printf("Enter the number of minutes: ");
    scanf("%d", &minutes);	//minutes = 90
    hours = minutes / 60;	//convert minute into hours  ex: hours = 90 / 60
    seconds = minutes * 60;	//convert minute into second ex: second = 90 * 60
    printf("Hours = %d \nSecond = %d",hours,seconds);	//Hours = 1, Second = 5400
    //display hours minute and second
	printf("\nhh:mm:ss = %d:%d:%d",hours,minutes,seconds);	// 1:90:5400
	return 0;
}
