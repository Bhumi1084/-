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
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
float area(float length, float breadth){
    return length * breadth;
}

// Function to calculate the area of a triangle
float area(float base, float height, char triangle){
    return 0.5 * base * height;
}

int main(){
    // Variables for storing dimensions
    float radius, length, breadth, base, height;

    // Input for circle
    cout<<"Enter the radius of the circle : ";
    cin>>radius;
    
    // Input for rectangle
    cout<<"Enter the length and breadth of the rectangle : ";
    cin>>length>>breadth;
    
    // Input for triangle
    cout<<"Enter the base and height of the triangle : ";
    cin>>base>>height;

    // Calculate and display the area of circle
    cout<<"Area of circle : "<<area(radius)<<endl;

    // Calculate and display the area of rectangle
    cout << "Area of rectangle: " << area(length, breadth)<<endl;

    // Calculate and display the area of triangle
    cout << "Area of triangle: " << area(base, height, 'T')<<endl;
    return 0;
}

