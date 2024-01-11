//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main(){
	int no, sum=0, temp;
	printf("Enter a number : ");
	scanf("%d",&no);
	while(no!=0){
		temp = no % 10;
		sum = sum + temp;
		no = no /10;
	}
	printf("\nsummation = %d",sum);
	return 0;
}
