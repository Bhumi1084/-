/*
	 	*
	   ***
	  *****
	 *******
	*********
*/
#include<stdio.h>
int main(){
	int i,k,j;	//declare a variable
    for(i = 1; i <= 5; i++){
        for(k = 1; k <= 5 - i; k++){
            printf(" ");	//print or give space
        }
        for(j = 1; j <= 2 * i - 1; j++){
            printf("*");	//print *
        }
        printf("\n");	//print next line
    }
	return 0;
}
