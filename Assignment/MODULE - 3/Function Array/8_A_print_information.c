//Write a program of structure employee that provides the following
//a. information -print and display empno, empname, address andage
#include<stdio.h>
create structure
struct employee{
	int empno, age;	//declare variable
	char empnm[50], add[100];	//create array
}emp;	//create object

//create function
void empInfo(){
	printf("Enter employee no : ");	//print message
	scanf("%d", &emp.empno);	//get value from user
	
	printf("\nEnter employee name : ");
	scanf("%s", &emp.empnm);	//get value from user
	
	printf("\nEnter employee address : ");
	scanf("%s", &emp.add);	//get value from user
	
	printf("\nEnter employee age : ");
	scanf("%d", &emp.age);	//gte value from user
}

//create function
void dispInfo(){
	printf("\nEmployee number : %d", emp.empno);	//display employee number
	printf("\nEmployee name : %s", emp.empnm);	//display employee name
	printf("\nEmployee address : %s", emp.add);	//display employee address
	printf("\nEmployee age : %d", emp.age);	//display employee age
}
int main(){
	//struct employee emp;	//create object
	empInfo();	//call function
	dispInfo();	//call function
	return 0;
}
