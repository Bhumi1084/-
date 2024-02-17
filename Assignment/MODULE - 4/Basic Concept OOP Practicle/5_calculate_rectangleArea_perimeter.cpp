//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
	//declare a variable
	float length, width;
public:
	//create a constructor
	Rectangle(float length1, float width1){
		//assign variable
		length = length1;
		width = width1;
	}
	
	//create a function
	float rectangleArea(){
		return length * width;
	}
	
	float perimeter(){
		return 2 * (length + width);
	}
};

int main(){
	float length1, width1;
	cout<<"\nEnter a length : ";
	cin>>length1;	//get value from user
	cout<<"\nEnter a width : ";
	cin>>width1;	//get value from user
	
	Rectangle rec(length1, width1);	//create object
	cout<<"\nArea of rectangle : "<<rec.rectangleArea();	//display Area of rectangle
	cout<<"\nPerimeter of rectangle : "<<rec.perimeter();	//display Perimeter of rectangle
	return 0;
}
