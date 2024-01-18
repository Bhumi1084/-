//Write a program of structure employee that provides the following
//b. Write a program of structure for five employee that provides the following 
//information -print and display empno, empname, address andage
#include<stdio.h>
struct employee{
	int empno, age;
	char empnm[50], add[100];
}emp[5];

int main(){
	int i;
	printf("\n----------Enter Employee Information----------");
	for(i=0; i<5; i++){
		printf("\n%d employee number : ",i+1);
		scanf("%d",&emp[i].empno);
		
		printf("%d employee name : ",i+1);
		scanf("%s",&emp[i].empnm);
		
		printf("%d employee address : ",i+1);
		scanf("%s",&emp[i].add);
		
		printf("%d employee age : ",i+1);
		scanf("%d",&emp[i].age);
	}
	
	printf("\n----------Employee Information----------");
	for(i=0; i<5; i++){
		printf("\n%d employee number : %d", i+1, emp[i].empno);
		printf("\n%d employee name : %s", i+1, emp[i].empnm);
		printf("\n%d employee address : %s", i+1, emp[i].add);
		printf("\n%d employee age : %d\n", i+1, emp[i].age);
	}
	return 0;
}
