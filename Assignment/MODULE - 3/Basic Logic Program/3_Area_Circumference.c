//WAP to Find Area And Circumference of Circle
#include<stdio.h>
void main(){
  	float radius, area, circumference;	//declare variable
    printf("Enter Radius of Circle : ");	
    scanf("%f",&radius);		//radius = 10
    //pi=3.14
    area=3.14*radius*radius;	//calculate the area of circle		area = 3.14*10*10	
    printf("Area = %f",area);		//Area = 314
    circumference=2*3.14*radius;	//calculate the circumference of circle		cf=2*3.14*10
    printf("\nCircumference = %f",circumference);		//Circumference = 62.8
}		
