//Write a program to find the multiplication values and the cubic values using
//inline function
#include<iostream>
using namespace std;
//create inline function
inline int multiplication(int number1, int number2){
	return number1 * number2;	//calculate multiplication
}

//create inline function
inline int cubic(int number){
	return number * number * number;	//calculate cubic
}

int main(){
	int number_1, number_2, number;	//declare variable
	cout<<"Enter a first number for multiplication : ";
	cin>>number_1;	//get value from user
	cout<<"Enter a second number for multiplication : ";
	cin>>number_2;	//get value from user
	cout<<"Enter a number for cubic : ";
	cin>>number;	//get value from user
	
	cout<<"Multiplication = "<<multiplication(number_1, number_2);	//display multiplication
	cout<<endl<<"Cubic = "<<cubic(number);	//display cubic
	return 0;
}
