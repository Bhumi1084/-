//Convert minutes into seconds and hours
#include<stdio.h>
int main(){
	int minutes, hours, seconds;
	printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60;
    seconds = minutes * 60;
    printf("Hours = %d \nSecond = %d",hours,seconds);
    printf("\nhh:mm:ss = %d:%d:%d",hours,minutes,seconds);
	return 0;
}
