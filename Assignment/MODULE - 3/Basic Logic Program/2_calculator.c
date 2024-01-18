/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */

#include<stdio.h>
int main(){
	int a, b, add, sub, mul, div, mod;
	printf("Enter a value a & b :");
	scanf("%d %d",&a,&b);
	
	add = a + b;
	printf("\nAddition = %d", add);
	
	sub = a - b;
	printf("\nSubstraction = %d", sub);
	
	mul = a * b;
	printf("\nMultiplication = %d", mul);
	
	mod = a % b;
	printf("\nModul = %d", mod);
	
	div = (float)a / (float)b;
	printf("\nDivision = %d", div);
	
	return 0;
}
