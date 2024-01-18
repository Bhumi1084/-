//WAP to Find Area And Circumference of Circle
#include<stdio.h>
void main(){
  	float radius, area, cf;
    printf("Enter Radius of Circle : ");
    scanf("%f",&radius);
    //pi=3.14
    area=3.14*radius*radius;
    printf("Area = %f",area);
    cf=2*3.14*radius;
    printf("\nCircumference = %f",cf);
}		
