//Write a C++ program to create a class called Triangle that has private member 
//variables for the lengths of its three sides. Implement member functions to 
//determine if the triangle is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;
class Triangle{
	float len1, len2, len3;
public :
	void setSides(float l1, float l2, float l3){
		len1 = l1;
		len2 = l2;
		len3 = l3;
	}
	
	void triangleType(){
		if(len1==len2 && len2==len3){
            cout<<endl<<"Equilateral Triangle";
        }
		else if(len1==len2 || len2==len3 || len1==len3){
            cout<<endl<<"Isosceles Triangle";
        }
		else{
            cout<<endl<<"Scalene Triangle";
        }
	}
};
int main(){
	float l1, l2, l3;
	Triangle triangle;
	
	cout<<endl<<"Enter length of 1 : ";
	cin>>l1;
    cout<<endl<<"Enter length of 2 : ";
    cin>>l2;
    cout<<endl<<"Enter length of 3 : ";
    cin>>l3;
    
    triangle.setSides(l1, l2, l3);
    triangle.triangleType();
	return 0;
}
