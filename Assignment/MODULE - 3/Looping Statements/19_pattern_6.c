/*
	* 
	* *
	* * *
	* * * *
	* * * * *
	* * * * * *
	* * * * *
	* * * *
	* * * 
	* *
	*
*/
#include<stdio.h>
int main(){
	int i,j;	//declare a variable
	//first loop are used row
	for(i=0; i<=5; i++){
		//second loop are used column
		for(j=0; j<i; j++){
			printf("* ");	//print *
		}
		printf("\n");	//print next line
	}
	//print row
	for(i=5; i>=0; i--){
		//print column
		for(j=0; j<=i; j++){
			printf("* ");	//print *
		}
		printf("\n");	//print next line
	}
}
