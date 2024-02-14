//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main(){
	int no, i=1, sum=0;
	while(i<=10){
		printf("Enter number %d : ",i);	//print message
		scanf("%d",&no);	//get value from user
		sum = sum + no;	//calculate sum of 10 number
		i++;	//increment number
	}
	printf("Sum = %d",sum);	//display sum
	return 0;
}
