//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main(){
	int i=0, num[5];
 	for(i=0; i<5; i++){
  		printf("Enter Number %d :",i);
  		scanf("%d", &num[i]);
 	}
 	for(i=0; i<5; i++){
  		printf("\n%d", num[i]);
 	}
}
