//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main(){
	int length, width, height, answer;
	Printf("Enter Length, Width and Height : ");
	scanf("%d %d %d", &length, &width, &height);	//get a value
	answer = 2 * ((width * length) + (height * length) + (height * width));	//calculate area of a rectangular prism using given by formula
	printf("Area Of Rectangular Prism : %d", answer);	//display answer
	return 0;
}
