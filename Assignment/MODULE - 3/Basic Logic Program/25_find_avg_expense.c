//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int e1,e2,e3,e4,e5,total;
	float avg_expense;
	printf("Enter 5 expense : ");
	scanf("%d %d %d %d %d",&e1,&e2,&e3,&e4,&e5);
	total = e1 + e2 + e3 + e4 + e5;
	avg_expense = (float)total/5;
	printf("Average of expense of : %f",avg_expense);
}
