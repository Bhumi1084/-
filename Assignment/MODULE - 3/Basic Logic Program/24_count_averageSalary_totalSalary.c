//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
	//declare variable
	char employee1,employee2,employee3,employee4,employee5;
	int salary1,salary2,salary3,salary4,salary5,total;
	float average;
	
	printf("Enter the 5 employee name : ");	//print 5 employee name
	scanf("%c %c %c %c %c",&employee1,&employee2,&employee3,&employee4,&employee5);	//get value from user
	
	printf("\nEnter the salary of 5 employee : ");	//print 5 employee salary
	scanf("%d %d %d %d %d",&salary1,&salary2,&salary3,&salary4,&salary5);	//get value from user
	
	average = (float)(salary1+salary2+salary3+salary4+salary5)/5;	//calculate average	=	(1000+2000+1200+1300+1500)/5
	total = salary1+salary2+salary3+salary4+salary5;	//total = 1000+2000+1200+1300+1500
	printf("\ntotal salary = %d",total);	//total salary = 7000
	printf("\naverage salary = %f",average);	//average salary = 1400
	return 0;
}
