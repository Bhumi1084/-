//Write a program of structure employee that provides the following
//b. Write a program of structure for five employee that provides the following 
//information -print and display empno, empname, address andage
#include<stdio.h>
//create structure
struct employee{
	int empno, age;	//declare variable
	char empnm[50], add[100];	//create array
}emp[5];	//create object 

int main(){
	int i;	//declare variable
	printf("\n----------Enter Employee Information----------");	//print message
	for(i=0; i<5; i++){
		printf("\n%d employee number : ",i+1);
		scanf("%d",&emp[i].empno);	//get value from user
		
		printf("%d employee name : ",i+1);
		scanf("%s",&emp[i].empnm);	//get value from user
		
		printf("%d employee address : ",i+1);
		scanf("%s",&emp[i].add);	//get value from user
		
		printf("%d employee age : ",i+1);
		scanf("%d",&emp[i].age);	//get value from user
	}
	
	printf("\n----------Employee Information----------");
	for(i=0; i<5; i++){
		printf("\n%d employee number : %d", i+1, emp[i].empno);	//display employee number
		printf("\n%d employee name : %s", i+1, emp[i].empnm);	//display name
		printf("\n%d employee address : %s", i+1, emp[i].add);	//display address
		printf("\n%d employee age : %d\n", i+1, emp[i].age);	//display age
	}
	return 0;
}
