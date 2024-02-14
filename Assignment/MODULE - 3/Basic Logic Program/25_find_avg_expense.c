//Accept 5 expense from user and find average of expense
#include<stdio.h>
int main(){
	int employee1,employee2,employee3,employee4,employee5,total;
	float average_expense;
	printf("Enter 5 expense : ");
	scanf("%d %d %d %d %d",&employee1,&employee2,&employee3,&employee4,&employee5);	//get a value from user
	total = employee1 + employee2 + employee3 + employee4 + employee5;	//total = 100 + 100 + 200 + 100 + 50 => 550
	average_expense = (float)total/5;	//average of expense = 550 / 5 => 110
	printf("Average of expense of : %f",average_expense);	//display average of expense
}
