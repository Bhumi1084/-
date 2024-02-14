//Convert days into months
#include<stdio.h>
int main(){
	int month, days ;
   	printf("Enter days : ") ;
   	scanf("%d", &days);	// days = 90
   	month = days / 30;	//calculate month ,  month = 90 / 30
   	printf("Month = %d", month) ;	// display month,   month = 3
   	return 0;
}
