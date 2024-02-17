//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference
#include<iostream>
using namespace std;

//create a class
class Circle{
	float r;	//create variable

public:
	//create constructor
	Circle(float r1){
		r = r1;		//assign variable
	}
	
	//create function
	float calculateArea(){
		return 3.14 * r * r;	//logic for calculate area of circle
	}
	
	//create function
	float circumference(){
		return 2 * 3.14 * r;	//logic for calculate circumference of circle
	}
};

int main(){
	float radius;	//declare a variable
	cout<<"Enter the radius of the circle : ";	//print message
	cin>>radius;	//get value from user
	
	Circle myCircle(radius);	//create object
	cout<<endl<<"Area of circle : "<<myCircle.calculateArea();	//display area of circle
	cout<<endl<<"Circumference of circle : "<<myCircle.circumference();	//display circumference of circle
	return 0;
}
