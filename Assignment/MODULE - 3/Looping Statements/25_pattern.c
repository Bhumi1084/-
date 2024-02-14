// (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>
int main() {
    int number, sum = 0,i;	//declare a variable
    printf("Enter the value of n: ");	//print message	
    scanf("%d", &number);	//get value from user
    for(i = 1; i <= number; ++i){
        printf("(%d*%d)",i,i);	//print number
        //check condition
        if(i!=number)
			printf(" + ");	//print + 
    }
    return 0;
}
