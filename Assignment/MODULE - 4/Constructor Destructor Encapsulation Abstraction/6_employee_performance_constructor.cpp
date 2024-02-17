//Write a C++ program to implement a class called Employee that has private member 
//variables for name, employee ID, and salary. Include member functions to calculate & 
//set salary based on employee performance. Using of constructor
#include<iostream>
using namespace std;

//create class
class Employee{
	//private data member
	string name;
	int employee_id;
	float salary;
public:
	//create constructor
	Employee(string employee_name1, int id, float salary1){
		name = employee_name1;
		employee_id = id;
		salary = salary1;
	}
	
	//create function
	void setPerformance_Salary(int employee_performance){
		//check condition 
		//condition are true then calculate salary
		//condition are false then print Invalid performance
		if(employee_performance>=0.0){
			salary *= employee_performance;	//calculate salary
			cout<<endl<<"Employee performance salary : "<<salary;	//display salary
		}
		else{
			cout<<endl<<"Invalid performance";
		}
	}
	
	//create function
	int getSalary(){
		return salary;
	}
	
	//create a function
	void disp(){
		cout<<endl<<"Employee Id : "<<employee_id;	//display employee id
		cout<<endl<<"Employee Name : "<<name;	//display employee name
		cout<<endl<<"Employee Salary : "<<salary;	//display employee salary
	}
};
int main(){
	//declare variable
	string name1;
	int id, salary, performance_salary;
	cout<<endl<<"Enter employee Id : ";
	cin>>id;	//get value from user
	cout<<endl<<"Enter employee Name : ";
	cin>>name1;	//get value from user
	cout<<endl<<"Enter employee Salary : ";
	cin>>salary;	//get value from user
	Employee emp(name1, id, salary);	//create class object
	
	cout<<endl<<"Enter employee performance base salary : ";
	cin>>performance_salary;	//get value from user
	emp.setPerformance_Salary(performance_salary);	//call function
	emp.disp();	//call function
	return 0;
}
