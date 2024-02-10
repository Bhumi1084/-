//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include<string>
using namespace std;
class MyString{
    string str;
public:
    MyString(){}
    MyString(string s) : str(s){}
    MyString operator +(MyString obj){
        MyString result;
        result.str = str + obj.str;
        return result;
    }
    void display(){
        cout<<str<<endl;
    }
};

int main(){
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2;

    cout<<"Concatenated string: ";
    result.display();
    return 0;
}

