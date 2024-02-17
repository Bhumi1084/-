//Write a C++ program to create a class called Car that has private member variables 
//for company,model,year. Implement member functions to get and set these variables.
#include<iostream>
using namespace std;

//create class
class Car{
	//private data member
	string company, model;
	int year;
public:
	//create function
	void setCarInfo(string car_Company, string car_model, int company_year){
		//assigning variable
		company = car_Company;
		model = car_model;
		year = company_year;
	}
	
	//create function
	string getCompany(){
		return company;
	}
	
	//create function
	string getModel(){
		return model;
	}
	
	//create function
	int getYear(){
		return year;
	}
};

int main(){
	//declare variable
	Car car;
	string name, model;
	int year;
	
	cout<<"Enter Company Name : ";
	cin>>name;	//get value from user
	cout<<endl<<"Enter Model : ";
	cin>>model;	//get value from user
	cout<<endl<<"Enter Year : ";
	cin>>year;	//get value from user
	
	car.setCarInfo(name, model, year);	//call function
	
	cout<<endl<<"Car Company : "<<car.getCompany()<<endl;	//display car company
	cout<<endl<<"Car Model : "<<car.getModel()<<endl;	//display car model
	cout<<endl<<"Car Year : "<<car.getYear()<<endl;	//display car year
	return 0;
}
