//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include <iostream>
using namespace std;

//Function to perform addition
int mathOperation(int number1, int number2){
    return number1 + number2;	//calculate addition
}

//Function to perform division
float mathOperation(float number1, float number2){
    if(number2 != 0){
    	return number1 / number2;	//calculate division
	}
	else{
		return 0;
	}
}

//Function to perform subtraction
int mathOperation(int number1, int number2, int number3){
    return number1 - number2 - number3;	//calculate substraction
}

//Function to perform multiplication
int mathOperation(int number1, int number2, int number3, int number4){
    return number1 * number2 * number3 * number4;	//calculate multiplication
}

int main(){
    int result;
    float result1;

    //Perform addition
    result = mathOperation(10, 5);	//call function
    cout<<"Addition : "<<result<<endl;	//display addition
	
	//Perform division
    result1 = mathOperation(100.0f, 5.0f);	//call function
    cout<<"Division : "<<result1<<endl;	//display division
    
	// Perform subtraction
    result = mathOperation(20, 5, 3);	//call function
    cout<<"Subtraction : "<<result<<endl;	//display substraction

    // Perform multiplication
    result = mathOperation(2, 3, 4, 5);	//call function
    cout<<"Multiplication : "<<result<<endl;	//display multiplication
    return 0;
}
