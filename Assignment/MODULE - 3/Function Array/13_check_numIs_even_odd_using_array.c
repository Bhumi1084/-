//WAP to accept 5 numbers from user and check entered number is even or odd
//using of array 
#include<stdio.h>
int main(){
	int n[5], i;
	printf("Enter 5 number : \n");
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);	//get value from user
	}
	
	for(i=0; i<5; i++){
		//check condition
		if(n[i] % 2 == 0){
			printf("\n%d is even",n[i]);
		}
		else{
			printf("\n%d is odd",n[i]);
		}
	}
	return 0;
}
