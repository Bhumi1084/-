//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main(){
	int n[5], i, j, temp;
	printf("Enter 5 number : \n");
	
	//this loop are used to get value from user
	for(i=0; i<5; i++){
		scanf("%d",&n[i]);	//get value from user
	}
	
	//this loop are used to value is sort it in ascending order
	for(i=0; i<5-1; i++){
		for(j=0; j<5-i-1; j++){
			//check condition
			if(n[j] > n[j+1]){
				temp = n[j];
				n[j] = n[j+1];
				n[j+1] = temp;
			}
		}
	}
	
	printf("Ascending Order\n");
	//this loop are used to print the value
	for(i=0; i<5; i++){
		printf("%d\n",n[i]);	//print value
	}
	return 0;
}
