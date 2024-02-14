//Perform 2D matrix array
#include<stdio.h>
int main(){
	int array[3][3], i, j;
	//this loop are used to get a value from user
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Enter [%d][%d] : ", i, j);
			scanf("%d",&array[i][j]);	//get value from user
		}
	}
	
	//this loop are used to print value
	for(i=0; i<3; i++){
		printf("\n");
		for(j=0; j<3; j++){
			printf("%d ", array[i][j]);	//display value
		}
	}
	return 0;
}
