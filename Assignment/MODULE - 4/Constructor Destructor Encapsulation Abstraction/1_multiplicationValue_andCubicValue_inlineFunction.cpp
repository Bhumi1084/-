//Write a program to find the multiplication values and the cubic values using
//inline function
#include<iostream>
using namespace std;
inline int multiplication(int number1, int number2){
	return number1 * number2;
}

inline int cubic(int number){
	return number * number * number;
}

int main(){
	int number_1, number_2, number;
	cout<<"Enter a first number for multiplication : ";
	cin>>number_1;
	cout<<"Enter a second number for multiplication : ";
	cin>>number_2;
	cout<<"Enter a number for cubic : ";
	cin>>number;
	
	cout<<"Multiplication = "<<multiplication(number_1, number_2);
	cout<<endl<<"Cubic = "<<cubic(number);
	return 0;
}
