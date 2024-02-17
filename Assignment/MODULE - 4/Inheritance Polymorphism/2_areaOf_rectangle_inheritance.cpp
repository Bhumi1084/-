//Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
//create base class
class Shape{
public:
	//create virtual function
	virtual int calculateArea(){
		return 0;
	}
};

//create derived class
class Rectangle : public Shape{
//private data member
	int length, width;
public:
	//create constructor
	Rectangle(int length1, int width1) : length(length1), width(width1){}
	int calculateArea(){
		return length * width;	//calculate multiplication
	}
};

int main(){
	int length, width;
	cout<<endl<<"Enter length : ";
	cin>>length;	//get value from user
	cout<<endl<<"Enter width : ";
	cin>>width;	//get value from user
	Rectangle rectangle(length, width);	//create derivade class object
	cout<<endl<<"Area of Rectangle : "<<rectangle.calculateArea();	//call function and display area of rectangle
	return 0;
}
