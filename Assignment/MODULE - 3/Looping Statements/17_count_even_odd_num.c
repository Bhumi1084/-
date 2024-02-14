//Calculate 5 numbers from user and calculate number of even and odd using
//of while loop
#include <stdio.h>
int main(){
    int number, evenCount = 0, oddCount = 0, i = 0;	//declare a variable
    while(i < 5){
        printf("Enter number %d: ", i + 1);
        scanf("%d", &number);	//get value from user
        
        //check condition number of even or odd
        if (number % 2 == 0) {
            evenCount++;	//increment even number
        } 
		else {
            oddCount++;	//increment odd number
        }
        i++;
    }
    printf("\nTotal even numbers = %d", evenCount);	//display total of even number
    printf("\nTotal odd numbers = %d", oddCount);	//display total of odd number
    return 0;
}

