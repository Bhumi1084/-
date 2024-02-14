/*
	1
	1 0
	1 0 1
	1 0 1 0
	1 0 1 0 1
*/
#include<stdio.h>
int main() 
{ 
    int i,j;	//declare a variable
    for(i=0; i<=5; i++){ 
        for(j=1; j<=i; j++){ 
            printf("%d",j%2);	//print pattern
        }
        printf("\n");	//print next line
    } 
    return 0; 
}
