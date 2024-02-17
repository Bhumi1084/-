//Write a program to calculate the area of circle, rectangle and triangle
//using Function Overloading
//Rectangle: Area * breadth
//Triangle: ½ *Area* breadth
//Circle: Pi * Area *Area

#include <iostream>
using namespace std;

float PI = 3.1;
// Function to calculate the area of a circle
float area(float radius){
    return PI * radius * radius;	//calculate area of a circle
}

//Function to calculate the area of a rectangle
float area(float length, float breadth){
    return length * breadth;	//calculate area of rectangle
}

//Function to calculate the area of a triangle
float area(float base, float height, char triangle){
    return 0.5 * base * height;		//calculate area of triangle
}

int main(){
    //Variables for storing dimensions
    float radius, length, breadth, base, height;

    //Input for circle
    cout<<"Enter the radius of the circle : ";
    cin>>radius;	//get value from user
    
    //Input for rectangle
    cout<<"Enter the length and breadth of the rectangle : ";
    cin>>length>>breadth;	//get value from user
    
    //Input for triangle
    cout<<"Enter the base and height of the triangle : ";
    cin>>base>>height;	//get value from user

    //Calculate and display the area of circle
    cout<<"Area of circle : "<<area(radius)<<endl;	//display area of circle

    //Calculate and display the area of rectangle
    cout<<"Area of rectangle: "<<area(length, breadth)<<endl;	//display area of rectangle

    //Calculate and display the area of triangle
    cout<<"Area of triangle: "<<area(base, height, 'T')<<endl;	//display area of triangle
    return 0;
}
