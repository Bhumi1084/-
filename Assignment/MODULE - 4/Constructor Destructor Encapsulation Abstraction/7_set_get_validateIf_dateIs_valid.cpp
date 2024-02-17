//Write a C++ program to implement a class called Date that has private
//member variables for day, month, and year. Include member functions to
//set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;

//create class
class Date{
	//private data member
	int day, month, year;

public:
	//create constructor
	Date(int day1, int month1, int year1){
		//assigning variable
		this->day = day1;
		this->month = month1;
		this->year = year1;
	}
	
	//create function
	void setDate(int day1, int month1, int year1){
		day = day1;
		month = month1;
		year = year1;
	}

	//create function
	int getDay(){
		return day;
	}
	
	int getMonth(){
		return month;
	}
	
	int getYear(){
		return year;
	}
	
	bool validDate(){
		//check condition
		if(month < 1 || month > 12){
			return false;
		}
		if((month==4 || month==6 || month==9 || month==11) && (day>30)){
			return false;
		}
		if(month == 2){
			if((year%4==0 && year%100!=0) || (year%400==0)){
				if(day>29){
					return false;
				}
			}
			else{
				if(day>28){
					return false;
				}
			}
		}
		return true;
	}
};

int main(){
	int day, month, year;
	cout<<endl<<"Enter a day : ";
	cin>>day;	//get value from user
	cout<<endl<<"Enter a month : ";
	cin>>month;	//get value from user
	cout<<endl<<"Enter a year : ";
	cin>>year;	//get value from user
	
	Date date(day, month, year);	//create class object
	//check condition
	//condition are true then display Date is valid and Date
	//condition are false then display Date is not valid, Please Enter valid Date
	if(date.validDate()){
		cout<<endl<<"Date is valid";
		cout<<endl;	//print next line
		cout<<"Date : "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear();	//display date
	}
	else{
		cout<<endl<<"Date is not valid, Please Enter valid Date";	//print message
	}
	return 0;
}
