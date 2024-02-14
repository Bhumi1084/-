//WAP to accept the height of a person in centimeters and categorize the
//person according to their height
#include<stdio.h>
int main() {
    float height;	//declare a variable
    printf("Enter the height in centimeters: ");	//print message
    scanf("%f", &height);	//get value

	//check condition
	//height less then equal to 0 then print Invalid height entered
	//height less then equal to 150 then print Person is Short
	//height less then equal to 170 then print Person is Average height
	//height less then equal to 190 then print Person is Tall
    if (height <= 0) {
        printf("\nInvalid height entered.\n");
    } 
	else if (height <= 150) {
        printf("\nPerson is Short");
    } 
	else if (height <= 170) {
        printf("\nPerson is Average height");
    } 
	else if (height <= 190) {
        printf("\nPerson is Tall");
    } 
	else {
        printf("\nPerson is Very Tall");	//condition are faulse then print this message
    }
    return 0;
}
