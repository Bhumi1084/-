/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */
#include<stdio.h>
int main(){
	int number1, number2, addition, substraction, multiplication, division, modual;	//declare variable
	printf("Enter a value number1 & number2 :");	//print message
	scanf("%d %d",&number1,&number2);	//get value from user	a=10, b=5
	
	addition = number1 + number2;	//addition		add=10+5
	printf("\nAddition = %d", addition);	//print ans		Addition = 15
	
	substraction = number1 - number2;	//substraction		sub = 10 - 5
	printf("\nSubstraction = %d", substraction);		// nSubstraction = 5
	
	multiplication = number1 * number2;	//multiplication 	mul = 10 * 5
	printf("\nMultiplication = %d", multiplication);	//nMultiplication = 50
	
	modual = number1 % number2;	//modual	mod =10%5
	printf("\nModul = %d", modual);	//Modual = 0
	
	division = (float)number1 / (float)number2;	//division		div = 10/5
	printf("\nDivision = %d", division);		//Division = 2
	return 0;
}
