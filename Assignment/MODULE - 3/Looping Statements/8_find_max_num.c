//Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
int main(){
	int number[5],i,max=0;	//declare a variable and number[5] is create a array
	printf("Enter Five number :");	//print message
	for(i=0;i<=4;i++){
        scanf("%d",&number[i]);	//get value from user and store in array
    }
    for(i=0;i<=4;i++){
    	//check condition for find max number
        if(number[i]>max){
            max=number[i];
		}       
    }
    printf("\nMax number : %d",max);	//display max number
	return 0;
}
