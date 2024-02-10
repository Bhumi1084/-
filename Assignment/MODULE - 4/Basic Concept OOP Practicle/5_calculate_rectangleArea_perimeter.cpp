//Write a C++ program to create a class called Rectangle that has private
//member variables for length and width. Implement member functions to
//calculate the rectangle's area and perimeter.
#include<iostream>
using namespace std;
class Rectangle{
	float length, width;
public:
	Rectangle(float l, float w){
		length = l;
		width = w;
	}
	
	float rectangleArea(){
		return length * width;
	}
	
	float perimeter(){
		return 2 * (length + width);
	}
};

int main(){
	float l1, w1;
	cout<<"\nEnter a length : ";
	cin>>l1;
	cout<<"\nEnter a width : ";
	cin>>w1;
	
	Rectangle rec(l1, w1);
	cout<<"\nArea of rectangle : "<<rec.rectangleArea();
	cout<<"\nPerimeter of rectangle : "<<rec.perimeter();
	return 0;
}
