//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main(){
	int no, sum=0, temp;	//declare a variable
	printf("Enter a number : ");	//print number
	scanf("%d",&no);	//get value from user
	while(no!=0){
		//give logic for summation of number
		temp = no % 10;
		sum = sum + temp;
		no = no /10;
	}
	printf("\nsummation = %d",sum);	//display summation
	return 0;
}
