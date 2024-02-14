//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include<stdio.h>
int main(){
	//declare a variable
	int array[100],arrayOf_size,i,j,temp1,temp2,character;
	
	printf("Array of size : ");	//print message
	scanf("%d",&arrayOf_size);	//get value from user
	printf("\nEnter a number : ");
	for(i=0; i<arrayOf_size; i++){
		scanf("%d", &array[i]);	//get value from user and store in array
	}
	
	printf("\n1. Accending");
	printf("\n2. Descending");
	printf("\nEnter user choise : ");
	scanf("%d", &character);
	
	
	switch(character){
		case 1:
			for(i=0; i<arrayOf_size; i++){
			//accending order
				for(j=0; j<arrayOf_size; j++){
					//check condition 
					if(array[j] > array[i]){
					temp1 = array[i];
					array[i] = array[j];
					array[j] = temp1;
					}
				}
			}
			printf("\nAccending Order : ");		//print message
			for(i=0; i<arrayOf_size; i++){
				printf(" %d ", array[i]);	//print accending order
			}
			break;	//break this case
			
		case 2:
			for(i=0; i<arrayOf_size; i++){
			//descending order
				for(j=0; j<arrayOf_size; j++){
					//check condition
					if(a[j] < array[i]){
						temp2 = array[i];
						array[i] = array[j];
						array[j] = temp2;
					}
				}
			}
			printf("\nDescending Order : ");	//print message
			for(i=0; i<arrayOf_size; i++){
				printf(" %d ", array[i]);	//display descending order
			}
			break;	//break this case
			
		default :
			printf("\nInvalid choice.");
	}
	return 0;
}
