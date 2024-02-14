//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int i=0, number[5];	//declare a variable and num[5] is create a array
 	for(i=0; i<5; i++){
  		printf("Enter Number %d :",i);	//print message
  		scanf("%d", &number[i]);	//get value from user and store in array
 	}
 	for(i=0; i<5; i++){
  		printf("\n%d", number[i]);	//print number
 	}
}
