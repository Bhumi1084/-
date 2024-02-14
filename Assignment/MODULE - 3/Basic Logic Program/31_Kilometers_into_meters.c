//Convert kilometers into meters
#include<stdio.h>
int main(){
	float kilometers, meters;
	printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);	//kilometers = 20
    //convert kilometers into meters
    meters = kilometers * 1000;	//meters = 20 * 1000
    //display meters
	printf("meters = %f", meters);	//meters = 20000
	return 0;
}
