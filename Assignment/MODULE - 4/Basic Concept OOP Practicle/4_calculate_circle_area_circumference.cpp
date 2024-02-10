//Write a C++ program to implement a class called Circle that has private
//member variables for radius. Include member functions to calculate the
//circle's area and circumference
#include<iostream>
using namespace std;
class Circle{
	float r;

public:
	Circle(float r1){
		r = r1;
	}
	
	float calculateArea(){
		return 3.14 * r * r;
	}
	
	float circumference(){
		return 2 * 3.14 * r;
	}
};

int main(){
	float radius;
	cout<<"Enter the radius of the circle : ";
	cin>>radius;
	
	Circle myCircle(radius);
	cout<<"\nArea of circle : "<<myCircle.calculateArea();
	cout<<"\nCircumference of circle : "<<myCircle.circumference();
	return 0;
}
