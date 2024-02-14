/*
	1
	2  3
	4  5  6
	7  8  9  10
	11 12 13 14 15
*/
#include<stdio.h>
int main(){
	int i,j,number=1;	//declare variable
	//first loop are print row
	for(i=0; i<5; i++){
		//second loop are print column
		for(j=0; j<=i; j++){
			printf("%d ",number++);	//print pattern
		}
		printf("\n");	//print next line
	}
	return 0;
}
