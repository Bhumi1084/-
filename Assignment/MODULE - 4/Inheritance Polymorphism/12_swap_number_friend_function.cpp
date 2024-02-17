//WAP to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;

//create class
class Swap{
	//private data member
    int number1, number2;
public:
	//create constructor
    Swap(int number1, int number2){
        this->number1 = number1;
        this->number2 = number2;
    }
 
    //Declare the friend function to swap
	//take arguments as call by reference
    friend void swap(Swap&);
};
 
//Define the swap function outside class scope
void swap(Swap& swap1){
    // Call by reference is used to passed object copy to the function
    cout<<endl<<"Before Swapping : "<<swap1.number1<<" "<<swap1.number2;
    // Swap operations with Swap Class variables

    swap1.number1=swap1.number1+swap1.number2;	//Sum of both numbers stored in number1
	swap1.number2=swap1.number1-swap1.number2;	//Difference(which was originally number1) stored in number2
	swap1.number1=swap1.number1-swap1.number2;	//Difference(which was originally number2) stored in number1

    cout<<endl<<"After Swapping : "<<swap1.number1<<" "<<swap1.number2;	//display value after swapping
}

int main(){
    Swap swap1(10, 20);	//create class object
    swap(swap1);	 //Call the swap function passing the object by reference
    return 0;
}
