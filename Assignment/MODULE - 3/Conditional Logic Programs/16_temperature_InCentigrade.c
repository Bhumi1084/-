//Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather  Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather    Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot		  Temp >=40 then Its Very Hot
#include <stdio.h>
int main() {
    int temperature;
    printf("Enter the temperature : ");	//print message
    scanf("%d", &temperature);	//get value from user
    
    //check condition, temperature less then 0 then print Freezing weather
    //temperature grater then equal to 0 and temperature less then equal to 10 then print Very cold weather
    //temperature grater then 10 and temperature less then equal to 20 then print Cold weather
    //temperature grater then 20 and temperature less then equal to 30 then print Normal in Temperature
    //temperature grater then 30 and temperature less then equal to 40 then print It's Hot
    //condition are faulse then print It's Very Hot
    if (temperature < 0) {
        printf("\nFreezing weather");
    } 
	else if (temperature >= 0 && temperature <= 10) {
        printf("\nVery Cold weather");
    } 
	else if (temperature > 10 && temperature <= 20) {
        printf("\nCold weather");
    } 
	else if (temperature > 20 && temperature <= 30) {
        printf("\nNormal in Temperature");
    } 
	else if (temperature > 30 && temperature <= 40) {
        printf("\nIt's Hot");
    } 
	else {
        printf("\nIt's Very Hot");
    }
    return 0;
}

