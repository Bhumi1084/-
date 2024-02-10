//WAP to create simple calculator using class
#include<iostream>
using namespace std;
class Calculator{
	float a, b;
	
public:
	void inputValue(){
		std::cout<<"Enter first number : ";
		std::cin>>a;
		std::cout<<"Enter second number : ";
		std::cin>>b;
	}
	int add(){
		return a+b;	
	}
	int sub(){
		return a-b;
	}
	int mul(){
		return a*b;
	}
	int div(){
		if(b==0){	
			cout<<"division by zero"<<endl;
		}
		else{
			return a/b;
		}
	}
}cal;

int main(){
	int ch;
	cout<<"0.Exit"<<"\n1.Addition"<<"\n2.Subtract"<<"\n3.Multiplication"<<"\n4.Division";
	do{
		cout<<"\nEnter Choice : ";
		cin>>ch;
		
		switch(ch){
			case 1:
				cal.inputValue();
				cout<<"Addition : "<<cal.add()<<endl;
				break;
			
			case 2:
				cal.inputValue();
				cout<<"Subtract : "<<cal.sub()<<endl;
				break;
				
			case 3:
				cal.inputValue();
				cout<<"Multiplication : "<<cal.mul()<<endl;
				break;
				
			case 4:
				cal.inputValue();
				cout<<"Division : "<<cal.div()<<endl;
				break;
		}
	}while(ch>=1 && ch<=4);
	return 0;
}
