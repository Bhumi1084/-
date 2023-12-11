//Convert kilometers into meters
#include<stdio.h>
int main(){
	float kilometers, meters;
	printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);
    meters = kilometers * 1000;
    printf("meters = %f", meters);
	return 0;
}
