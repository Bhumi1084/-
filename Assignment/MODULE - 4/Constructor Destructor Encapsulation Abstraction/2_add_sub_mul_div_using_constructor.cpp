//Write a program of Addition, Subtraction, Division, Multiplication using constructor.
#include<iostream>
using namespace std;
class Calculator{
	float no1, no2;
public:
	Calculator(float n1, float n2){
		no1 = n1;
		no2 = n2;
	}
	
	float add(){
		return no1 + no2;
	}
	
	float sub(){
		return no1 - no2;
	}
	
	float mul(){
		return no1 * no2;
	}
	
	float div(){
		if(no2!=0){
			return no1/no2;
		}
		else{
			cout<<"\nCan not divide by zero.";
		}
	}
};

int main(){
	float n1, n2, ans;
	cout<<"\nEnter a two number : ";
	cin>>n1 >>n2;
	Calculator cal(n1, n2);
	
	cout<<"\nAddition : "<<cal.add();
	cout<<"\nSubtraction : "<<cal.sub();
	cout<<"\nMultiplication : "<<cal.mul();
	
	ans = cal.div();
    if (ans != 0.0) {
        cout<<"Division : "<<ans;
    }
	return 0;
}
