//Write a program to concatenate the two strings using Operator Overloading
#include <iostream>
#include<string>
using namespace std;

//create class
class MyString{
	//private data member
    string str;
public:
	//create default constructor
    MyString(){}
    //create constructor
    MyString(string str1) : str(str1){}
    
    //Overloaded + operator
    MyString operator +(MyString obj){
        MyString result;
        result.str = str + obj.str;	//Concatenate the strings
        return result;	//Return the concatenated string
    }
    void display(){
        cout<<str<<endl;	//display string
    }
};

int main(){
    MyString str1("Hello, ");
    MyString str2("world!");

    MyString result = str1 + str2;	//Concatenate the strings using operator overloading

    cout<<"Concatenated string: ";
    result.display();	//call function and display string 
    return 0;
}

