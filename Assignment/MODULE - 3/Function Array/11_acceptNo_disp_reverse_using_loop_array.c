//WAP to accept 5 numbers from user and display in reverse order using for
//loop and array
#include<stdio.h>
int reverse, temp;	//declare a variable

//create a function with return type and with parameter
int reverse_Number(int number){
	reverse = 0;	//initialize reverse variable
	while(number > 0){
		temp = number%10;	//extract the last digit
		reverse = reverse * 10 + temp;	//build reversed number
		number /= 10;	//remove last digit
	}				
	return reverse;		//return reverse number
}
int main(){
	int no[5], i;	//no[5] is declare array to store the numbers, i is declare variable
	printf("------Enter Reverse Number------\n");
	for(i=0; i<5; i++){
		scanf("%d",&no[i]);	//get value from user
		// reverse each number and store
		no[i] = reverse_Number(no[i]);	//function call
	}
	printf("\n------Reverse Order------\n");
//	for(i=4; i>=0; i--){
//		printf("%d\n", n[i]);
//	}
	
	for(i=0; i<5; i++){
		printf("%d\n", no[i]);	//display number in reverse order
	}
	return 0;
}
