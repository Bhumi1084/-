//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;

//create class
class Calculator{
	//private data member
	float number1, number2;
public:
	//create constructor
	Calculator(float no1, float no2){
		//assigning variable
		number1 = no1;
		number2 = no2;
	}
	
	//create function
	float addition(){
		return number1 + number2;	//calculate addition
	}
	
	//create function
	float substraction(){
		return number1 - number2;	//calculate substraction
	}
	
	//create function
	float multiplication(){
		return number1 * number2;	//calculate multiplication
	}
	
	//create function
	float division(){
		//check condition, condition are true then calculate division 
		//condition are false then print Can not divide by zero
		if(number2!=0){
			return number1/number2;	//calculate division
		}
		else{
			cout<<"\nCan not divide by zero.";
		}
	}
};

int main(){
	float number1, number2, answer;	//declare variable
	cout<<"\nEnter a two number : ";
	cin>>number1 >>number2;	//get value from user
	Calculator cal(number1, number2);	//create class object
	
	cout<<"\nAddition : "<<cal.addition();	//display addition
	cout<<"\nSubtraction : "<<cal.substraction();	//display substraction
	cout<<"\nMultiplication : "<<cal.multiplication();	//display multiplication
	
	answer = cal.division();	//call function
    if (answer != 0.0) {
        cout<<"Division : "<<answer;	//display division
    }
	return 0;
}
