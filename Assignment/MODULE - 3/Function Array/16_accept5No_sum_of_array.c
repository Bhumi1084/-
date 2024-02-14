//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main(){
	int n[5], i, sum;
	printf("Enter 5 number : \n");
	for(i=0; i<5; i++){
		scanf("%d", &n[i]);	//get value from user and store value
	}
	
	sum = 0;
	for(i=0; i<5; i++){
		sum = sum + n[i];	//calculate sum of array
	}
	printf("sum = %d", sum);	//display sum of array
	return 0;
}
