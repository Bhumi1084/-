//Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main(){
	char emp1,emp2,emp3,emp4,emp5;
	int sal1,sal2,sal3,sal4,sal5,total;
	float avg;
	
	printf("Enter the 5 employee name : ");
	scanf("%c %c %c %c %c",&emp1,&emp2,&emp3,&emp4,&emp5);
	
	printf("\nEnter the salary of 5 employee : ");
	scanf("%d %d %d %d %d",&sal1,&sal2,&sal3,&sal4,&sal5);
	
	avg = (float)(sal1+sal2+sal3+sal4+sal5)/5;
	total = sal1+sal2+sal3+sal4+sal5;
	printf("\ntotal salary = %d",total);
	printf("\naverage salary = %f",avg);
	return 0;
}
