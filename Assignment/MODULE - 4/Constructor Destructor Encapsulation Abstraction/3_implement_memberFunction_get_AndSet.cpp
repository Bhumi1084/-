//Write a C++ program to create a class called Car that has private member variables 
//for company,model,year. Implement member functions to get and set these variables.
#include<iostream>
using namespace std;
class Car{
	string company, model;
	int year;
public:
	void setCarInfo(string car_Com, string car_mod, int cyear){
		company = car_Com;
		model = car_mod;
		year = cyear;
	}
	
	string getCompany(){
		return company;
	}
	
	string getModel(){
		return model;
	}
	
	int getYear(){
		return year;
	}
};

int main(){
	Car car;
	string nm, model;
	int year;
	
	cout<<"Enter Company Name : ";
	cin>>nm;
	cout<<endl<<"Enter Model : ";
	cin>>model;
	cout<<endl<<"Enter Year : ";
	cin>>year;
	
	car.setCarInfo(nm, model, year);
	
	cout<<endl<<"Car Company : "<<car.getCompany()<<endl;
	cout<<endl<<"Car Model : "<<car.getModel()<<endl;
	cout<<endl<<"Car Year : "<<car.getYear()<<endl;
	
	return 0;
}
