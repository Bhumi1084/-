//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main(){
	float fahrenheit, celsius;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);	//get a value from user 
    //calculate celsius
	celsius = (fahrenheit - 32) * 5 / 9;	// (70 -32)*5/9;
    printf("Celsius = %f", celsius);	//celsius = 21.11
    return 0;
}
