//WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)
#include <stdio.h>	
int main() {
	//declare a variable
    int charecter;
    float number1, number2, answer;

    printf("Enter 1 number = ");	//print message
    scanf("%f", &number1);	//get value from user

    printf("\nEnter 2 number = ");	//print message
    scanf("%f", &number2);	//get value from user

    printf("\nChoose operation.....");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice = ");
    scanf("%d", &charecter);	//get value from user

    switch(charecter) {
        case 1:
            answer = number1 + number2;	//calculate addition
            printf("\nAddition = %.2f", answer);	//display addition
            break;	//break this case
        case 2:
            answer = number1 - number2; //calculate subtraction
            printf("\nSubtraction = %.2f", answer);	//display subtraction
            break;	//break this case
        case 3:
            answer = number1 * number2;	//calculate multiplication
            printf("\nMultiplication = %.2f", answer);	//display multiplication
            break;	//break this case
        case 4:
        	//check condition
        	//number2 is not equal to zero condition are true then calculate division and display answer
        	//condition are false then print Error! Division by zero is not allowed
            if (number2 != 0) {
                answer = number1 / number2;	//calculate division
                printf("\nDivision = %.2f", answer);	//display division
            }
			else {
                printf("\nError! Division by zero is not allowed.");
            }
            break;	//break this case
        default:
            printf("\nInvalid choice!");
    }
    return 0;
}
