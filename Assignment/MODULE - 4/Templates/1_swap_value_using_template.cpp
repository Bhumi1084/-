//Write a program of to swap the two values using template
#include <iostream>
using namespace std;

//Template function to swap two values
template<typename T>
void swapValues(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    // Swap integers
    int num1 = 5, num2 = 10;
    cout<<"Before swapping : num1 = "<<num1<<", num2 = "<<num2<<endl;
    swapValues(num1, num2);
    cout<<"After swapping : num1 = "<<num1<<", num2 = "<<num2<<endl;
    return 0;
}
