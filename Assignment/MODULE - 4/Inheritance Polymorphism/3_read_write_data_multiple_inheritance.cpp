//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance)
#include<iostream>
using namespace std;

//create base class
class Person{
public:
	string name;
	int age;
	//create function
	void writeData(){
		cout<<endl<<"Enter name : ";
		cin>>name;	//get value from user
		cout<<endl<<"Enter age : ";
		cin>>age;	//get value from user
	}
	
	void readData(){
		cout<<endl<<"Name : "<<name;	//display name
		cout<<endl<<"Age : "<<age;	//display age
	}
};

//create derived class
class Student : public Person{
public:
	float percentage;
	//create function
	 void write1Data(){
        writeData();	//call function
        cout<<endl<< "Enter percentage : ";
        cin>>percentage;	//get value from user
    }

    void read1Data(){
        readData();	//call function
        cout<<endl<<"Percentage : "<<percentage;	//display percentage
    }
};

//create derived class
class Teacher : public Student{
public: 
	int salary;  
	void write_Data(){
        write1Data();	//call function
        cout<<endl<<"Enter salary : ";
        cin>>salary;	//get value from user
    }
    
	void read_Data(){
        read1Data();	//call function
        cout<<endl<<"Salary : "<<salary;	//display salary
    }
};

int main(){
	 Teacher teacher;	//create object
	 teacher.write_Data();	//call function
	 teacher.read_Data();	//call function
	return 0;
}
