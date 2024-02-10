//WAP to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;
class Swap{
    int a, b;
public:
    Swap(int a, int b){
        this->a = a;
        this->b = b;
    }
 
    //Declare the friend function to swap, take arguments as call by reference
    friend void swap(Swap&);
};
 
//Define the swap function outside class scope
void swap(Swap& s1){
    // Call by reference is used to passed object copy to the function
    cout<<endl<<"Before Swapping : "<<s1.a<<" "<<s1.b;
    // Swap operations with Swap Class variables

    s1.a=s1.a+s1.b;
	s1.b=s1.a-s1.b;		
	s1.a=s1.a-s1.b;

    cout<<endl<<"After Swapping : "<<s1.a<<" "<<s1.b;
}

int main(){
    Swap s(10, 20);
    swap(s);
    return 0;
}
