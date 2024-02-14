//Find Area of Square formula : a = a2
#include<stdio.h>
int main(){
	float number,area;
	printf("Enter the number : ");
	scanf("%f", &number);	//get value from user
	area = number*number;	//calculate the area of square
	printf("\n Area = %f",area);
	return 0;
}
