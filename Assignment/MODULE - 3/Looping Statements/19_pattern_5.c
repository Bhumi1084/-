/*
	A
	A B
	A B C 
	A B C D
	A B C D E
*/
#include<stdio.h>
int main() 
{ 
    char i,j;  //declare a variable 
    //first loop are used to print row
    for(i = 'A'; i <= 'E'; i++){ 
    	//second loop are used to column
        for(j = 'A'; j <= i; j++){ 
            printf("%c",j);	//print pattern
        }
        printf("\n"); //print next line
    } 
    return 0; 
}
