//Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)
#include<stdio.h>
int main(){
	int n[5],i,max=0;
	printf("Enter Five number :");
	for(i=0;i<=4;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<=4;i++){
        if(n[i]>max){
            max=n[i]; 
		}       
    }
    printf("\nMax number : %d",max);
	return 0;
}
