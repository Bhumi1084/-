//WAP to find the largest of three numbers.
#include <stdio.h>
int main() {
    int number1, number2, number3, largest;
    printf("Enter 3 numbers : ");	//print message
    scanf("%d %d %d", &number1, &number2, &number3);	//get value from user
	
	//largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    //printf("\nThe largest number is: %d", largest);	//display largest number
    
	//check condition
	//number1 grater then equal to number2 and number1 greter then equal to number3 then print number1 is largest
	//number2 grater then equal to number1 and number2 grater then equal to number3 then print number2 is largest
	//condition are faulse then print number3 is largest
	if (number1 >= number2 && number1 >= number3) {
        printf("number1 is largest");
    } 
	else if (number2 >= number1 && number2 >= number3) {
        printf("number2 is largest");
    } 
	else {
        printf("number3 is largest");
    }
    return 0;
}
