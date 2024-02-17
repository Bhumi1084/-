//Write a C++ program to create a class called Triangle that has private member 
//variables for the lengths of its three sides. Implement member functions to 
//determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

//create class
class Triangle{
	//private data member
	float length1, length2, length3;
public :
	//create function
	void setSides(float len1, float len2, float len3){
		length1 = len1;
		length2 = len2;
		length3 = len3;
	}
	
	void triangleType(){
		//check condition
		//any one condition are true then print Equilateral Triangle or Isosceles Triangle
		//condition are false then print Scalene Triangle
		if(length1==length2 && length2==length3){
            cout<<endl<<"Equilateral Triangle";
        }
		else if(length1==length2 || length2==length3 || length1==length3){
            cout<<endl<<"Isosceles Triangle";
        }
		else{
            cout<<endl<<"Scalene Triangle";
        }
	}
};
int main(){
	float length1, length2, length3;
	Triangle triangle;	//create object
	
	cout<<endl<<"Enter length of 1 : ";
	cin>>length1;	//get value from user
    cout<<endl<<"Enter length of 2 : ";
    cin>>length2;	//get value from user
    cout<<endl<<"Enter length of 3 : ";
    cin>>length3;	//get value from user
    
    triangle.setSides(length1, length2, length3);	//call function
    triangle.triangleType();	//call function
	return 0;
}
