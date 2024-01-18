//WAP to accept the height of a person in centimeters and categorize the
//person according to their height
#include<stdio.h>
int main() {
    float h;
    printf("Enter the height in centimeters: ");
    scanf("%f", &h);

    if (h <= 0) {
        printf("\nInvalid height entered.\n");
    } 
	else if (h <= 150) {
        printf("\nPerson is Short");
    } 
	else if (h <= 170) {
        printf("\nPerson is Average height");
    } 
	else if (h <= 190) {
        printf("\nPerson is Tall");
    } 
	else {
        printf("\nPerson is Very Tall");
    }
    return 0;
}
