//WAP to find out the max number from given array using function
#include <stdio.h>
int max_number, i;	//declare variable

//create a function with return type and with parameter
int findMax(int number[], int size){
	max_number = number[0];	//assign value
	for(i=1; i<size; i++){
		//check condition 
		//number of i grater then max_number this condition are true then return max_number equal to number of i
		if(number[i] > max_number){
			max_number = number[i];
		}
	}
	return max_number;	//return the maximum number
}

int main(){
	int no[50], sizeOf_array, i, maximum;	//declare variable
	printf("Enter size of array : ");	//print message
	scanf("%d",&sizeOf_array);	//get value from user
	printf("Enter the number : \n");
	//the loop will continue and store or get the value until the condition is false
	//if the condition is false then the loop will stop	
	for(i=0; i<sizeOf_array; i++){
		scanf("%d",&no[i]);
	}
	maximum = findMax(no,sizeOf_array);	//call the function
	printf("\nMaximum number in the array is : %d",maximum);	//display maximum number
	return 0;
}
