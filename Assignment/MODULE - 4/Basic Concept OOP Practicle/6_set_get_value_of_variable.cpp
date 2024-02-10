//Write a C++ program to create a class called Person that has private
//member variables for name, age and country. Implement member
//functions to set and get the values of these variables.
#include<iostream>
//#include<string>
using namespace std;
class Person{
	string name, country;
	int age;
	
public:
	void setValue(string per_nm, int per_age, string per_cou){
		name = per_nm;
		age = per_age;
		country = per_cou;
	}
	
	string getName(){
		return name;
	}
	
	int getAge(){
		return age;
	}
	
	string getCountry(){
		return country;
	}
}obj;

int main(){
	string nm, country;
	int age;
	cout<<"\nEnter Name : ";
	cin>>nm;
	cout<<"\nEnter Age : ";
	cin>>age;
	cout<<"\nEnter Country Name : ";
	cin>>country;
	
	obj.setValue(nm, age, country);
	
	cout<<"\nName : "<<obj.getName();
	cout<<"\nAge : "<<obj.getAge();
	cout<<"\nCountry Name : "<<obj.getCountry();
	return 0;
}
