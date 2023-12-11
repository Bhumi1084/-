#include<stdio.h>
int main(){
	int cyear,byear,Current_Age;
	printf("Enter current year : ");
	scanf("%d",&cyear);
	printf("Enter Birth Year : ");
	scanf("%d",&byear);
	Current_Age = cyear-byear;
	
	printf("Current Age = %d",Current_Age);
	Current_Age++;
	printf("\nNext Year Age : %d",Current_Age);
	--Current_Age;
	Current_Age--;
	printf("\nPrevious Year Age : %d",Current_Age);
	return 0;
}
