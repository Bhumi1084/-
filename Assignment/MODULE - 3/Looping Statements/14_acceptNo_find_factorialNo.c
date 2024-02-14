//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main() {
    int number, factorial, i, j;	//declare a variable
    for (i=1; i<=5; i++){
        printf("\n\nEnter %d number  = ", i);	//print message
        scanf("%d", &number);	//get value from user
        factorial = 1;
        
        for(j=1; j<=number; j++){
        	//calculate factorial or logic for factorial
            factorial = factorial * j;
        }
        printf("Factorial of %d is = %d", number, factorial);	//display factorial
    }
    return 0;
}
