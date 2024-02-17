//Write a C++ Program to show access to Private Public and Protected using Inheritance
#include <iostream>
using namespace std;

//create class
class Base{
//private data member
private:
    int privateMemberBase;
//protected data member
protected:
    int protectedMemberBase;
public:
    int publicMemberBase;	//public data member
    
    //create function
    void setBaseValues(int private_Value, int protected_Value, int public_Value){
        privateMemberBase = private_Value;
        protectedMemberBase = protected_Value;
        publicMemberBase = public_Value;
    }

    void displayBase(){
        cout<<"Private Member of Base : "<<privateMemberBase<<endl;	//display private member
        cout<<"Protected Member of Base : "<<protectedMemberBase<<endl;	//display protected member
        cout<<"Public Member of Base : "<<publicMemberBase<<endl;	//display public member
    }
};

//create derived class
class Derived : public Base{
public:
	//create function
    void setDerivedValues(int protectedVal, int publicVal){
        protectedMemberBase = protectedVal;
        publicMemberBase = publicVal;
    }

    void displayDerived(){
        cout<<"Protected Member of Base in Derived : "<<protectedMemberBase<<endl;	//display protected member in derivade class
        cout<<"Public Member of Base in Derived : "<<publicMemberBase<<endl;	//display public member in derived class
    }
};

int main(){
    Base base;	//create object in base class
    Derived derived;	//create object 

    base.setBaseValues(1, 2, 3);	//call function
    derived.setDerivedValues(20, 30);	//call function
    base.displayBase();	//call function
    derived.displayDerived();	//call function
    return 0;
}
