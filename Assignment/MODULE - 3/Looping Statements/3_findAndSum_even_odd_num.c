//WAP to take 10 no. Input from user find out below values
	//a. How many Even numbers are there
	//b. How many odd numbers are there
	//c. Sum of even numbers
	//d. Sum of odd numbers
#include<stdio.h>
int main(){
	//declare a variable
	int i=0, number[10], evenCount = 0, oddCount = 0, sumEven=0, sumOdd=0;
	for(i=0; i<10; i++){
		printf("Enter 10 Number %d :",i);	//print message
		scanf("%d", &number[i]);	//get value from user and store value in array
		
		//check condition the number is even or odd
		if (number[i] % 2 == 0){
            evenCount++;	//increment even number and store even number in evenCount variable
            sumEven += number[i];	//calculate sum of even number
        }
		else{
            oddCount++;	//increment odd number and store add number in oddCount variable
            sumOdd += number[i];	//calculate sum of add number
        }
	}
	printf("\nNumber of even numbers: %d", evenCount);	//display even number
    printf("\nNumber of odd numbers: %d", oddCount);	//display odd number
    printf("\nSum of even numbers: %d", sumEven);	//dispaly sum of even number
    printf("\nSum of odd numbers: %d", sumOdd);	//display sum of odd number
	return 0;
}
