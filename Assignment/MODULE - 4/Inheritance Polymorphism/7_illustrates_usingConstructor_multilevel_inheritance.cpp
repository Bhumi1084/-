//Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include <iostream>
using namespace std;
//create base class
class A{
public:
	//create constructor
    A(){
        cout<<"Constructor of class A"<<endl;
    }
};

//create derived class
class B : public A{
public:
	//create constructor
    B(){
        cout<<"Constructor of class B"<<endl;
    }
};

//create derived class
class C : public B{
public:
	//create constructor
    C(){
        cout<<"Constructor of class C"<<endl;
    }
};

int main(){
    C objC;	//create last derived class object
    return 0;
}

