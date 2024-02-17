//WAP to create simple calculator using class
#include<iostream>
using namespace std;

//create class
class Calculator{
	//create data member
	float first_number, second_number;
	
public:
	//create function
	void inputValue(){
		cout<<"Enter first number : ";
		cin>>first_number;	//get value from user
		cout<<"Enter second number : ";
		cin>>second_number;	//get value from user
	}
	//create function
	int addition(){
		return first_number + second_number;	//calculate addition
	}
	
	//create function
	int substraction(){
		return first_number - second_number;	//calculate substraction
	}
	
	//create function
	int multiplication(){
		return first_number * second_number;	//calculate multiplication
	}
	
	//create function
	int division(){
		//check condition
		//condition are true then print division by zero otherwise return calculate division
		if(b==0){	
			cout<<"division by zero"<<endl;
		}
		else{
			return first_number/second_number;	//calculate division
		}
	}
}cal;	//create object

int main(){
	int character;	//declare a variable
	cout<<"0.Exit"<<"\n1.Addition"<<"\n2.Subtract"<<"\n3.Multiplication"<<"\n4.Division";	//print message
	do{
		cout<<endl<<"Enter Choice : ";
		cin>>character;	//get value from user
		
		switch(character){
			case 1:
				cal.inputValue();	//call function
				cout<<"Addition : "<<cal.addition()<<endl;	//display addition
				break;	//break this case
			
			case 2:
				cal.inputValue();	//call function
				cout<<"Subtract : "<<cal.substraction()<<endl;	//display substraction
				break;	//break this case
				
			case 3:
				cal.inputValue();	//call function
				cout<<"Multiplication : "<<cal.multiplication()<<endl;	//display multiplication
				break;	//break this case
				
			case 4:
				cal.inputValue();	//call function
				cout<<"Division : "<<cal.division()<<endl;	//display division
				break;	//break this case
		}
	}while(character>=1 && ch<=4);	//check condition
	return 0;
}
