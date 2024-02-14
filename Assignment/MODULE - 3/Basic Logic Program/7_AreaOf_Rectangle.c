//Find area of Rectangle Formula : A=wl
#include<stdio.h>
int main(){
	int length,width,answer;
	printf("Enter Width & Length : ");	
	scanf("%d %d",&width,&length);	//get the two value from user
	//calculate area of rectangle
	answer = width * length;		// a = 10 * 5
	//display area of rectangle
	printf("Area Of Rectangle : %d",answer);		//Area Of Rectangle : 50
	return 0;
}
