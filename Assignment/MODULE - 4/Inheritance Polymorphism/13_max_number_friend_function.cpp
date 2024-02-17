//Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

//create class
class MaxFinder{
	//private data member
private:
    int number1, number2;
public:
	//create constructor
    MaxFinder(int num1, int num2) : number1(num1), number2(num2){}	//Initialize number1 and number2 with values passed to the constructor
    friend int findMax(MaxFinder obj);	//Declare findMax function as a friend of MaxFinder class
};

//create function
int findMax(MaxFinder obj){
    return (obj.number1 > obj.number2) ? obj.number1 : obj.number2;	//Compare number1 and number2 and return the maximum
}

int main(){
    int number1, number2;
    
    //Input two numbers
    cout<<endl<<"Enter two numbers : ";
    cin>>number1>>number2;

    MaxFinder numbers(number1, number2);	//create class object
    int result = findMax(numbers);	//Call function to get the maximum number

    cout<<endl<<"Maximum number is : "<<result;	//display result or max number
    return 0;
}
