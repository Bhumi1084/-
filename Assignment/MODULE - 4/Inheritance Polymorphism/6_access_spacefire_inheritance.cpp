//Write a C++ Program to show access to Private Public and Protected using Inheritance
#include <iostream>
using namespace std;
class Base{
private:
    int privateMemberBase;
protected:
    int protectedMemberBase;
public:
    int publicMemberBase;
    
    void setBaseValues(int private_Value, int protected_Value, int public_Value){
        privateMemberBase = private_Value;
        protectedMemberBase = protected_Value;
        publicMemberBase = public_Value;
    }

    void displayBase(){
        cout<<"Private Member of Base : "<<privateMemberBase<<endl;
        cout<<"Protected Member of Base : "<<protectedMemberBase<<endl;
        cout<<"Public Member of Base : "<<publicMemberBase<<endl;
    }
};

class Derived : public Base{
public:
    void setDerivedValues(int protectedVal, int publicVal){
        protectedMemberBase = protectedVal;
        publicMemberBase = publicVal;
    }

    void displayDerived(){
        cout<<"Protected Member of Base in Derived : "<<protectedMemberBase<<endl;
        cout<<"Public Member of Base in Derived : "<<publicMemberBase<<endl;
    }
};

int main() {
    Base base;
    Derived derived;

    base.setBaseValues(1, 2, 3);
    derived.setDerivedValues(20, 30);
    base.displayBase();
    derived.displayDerived();
    return 0;
}
