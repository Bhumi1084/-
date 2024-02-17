//Write a program of to swap the two values using template
#include <iostream>
using namespace std;

//create template
//Template function to swap two values
template<typename T>
//create function
void swapValues(T& number1, T& number2){
	//logic for swap value
    T temp = number1;
    number1 = number2;
    number2 = temp;
}

int main(){
    int number1 = 5, number2 = 10;	//declare ststic value
    cout<<"Before swapping : number1 = "<<number1<<", number2 = "<<number2<<endl;	//display before swapping value
    swapValues(number1, number2);	//call function
    cout<<"After swapping : number1 = "<<number1<<", number2 = "<<number2<<endl;	//display after swaping value
    return 0;
}
