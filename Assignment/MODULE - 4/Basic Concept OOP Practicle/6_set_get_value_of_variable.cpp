//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
using namespace std;
//create class
class Person{
	//create private data member
	string name, country;
	int age;
	
public:
	//create function
	void setValue(string per_nm, int per_age, string per_cou){
		//assign value
		name = per_nm;
		age = per_age;
		country = per_cou;
	}
	
	//create function
	string getName(){
		return name;
	}
	
	int getAge(){
		return age;
	}
	
	string getCountry(){
		return country;
	}
}obj;	//create class object

int main(){
	string nm, country;	//create variable
	int age;
	cout<<"\nEnter Name : ";
	cin>>nm;	//get value from user
	cout<<"\nEnter Age : ";
	cin>>age;	//get value from user
	cout<<"\nEnter Country Name : ";
	cin>>country;	//get value from user
	
	obj.setValue(nm, age, country);	//call function
	
	cout<<"\nName : "<<obj.getName();	//display name
	cout<<"\nAge : "<<obj.getAge();	//display age
	cout<<"\nCountry Name : "<<obj.getCountry();	//display country name
	return 0;
}
