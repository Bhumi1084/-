//Write a C++ program to implement a class called Student that has private
//member variables for name, class, roll number, and marks. Include
//member functions to calculate the grade based on the marks and display
//the student's information. Accept address from each student implement
//using of aggregation
#include <iostream>
using namespace std;

//create class
class Student{
	//create data member
    string name, studentClass;
    int rollNumber, marks;

public:
    //create constructor
	//Constructor to initialize member variables
    Student(string name1, string studentClass1, int rollNumber1, int marks1){
        //assign variable 
		this->name = name1;
        this->studentClass = studentClass1;
        this->rollNumber = rollNumber1;
        this->marks = marks1;
    }

    //Function to calculate grade based on marks
    char calculateGrade(){
    	//check condition
        if(marks >= 90){
            return 'A';
        } 
		else if(marks >= 80){
            return 'B';
        } 
		else if(marks >= 70){
            return 'C';
        } 
		else if(marks >= 60){
            return 'D';
        } 
		else{
            return 'F';
        }
    }

    //create Function and display student information
    void displayInfo(){
        cout<<endl<<"Name : "<< name ;	//display name
        cout<<endl<<"Class : "<<studentClass;	//display student class
        cout<<endl<<"Roll Number : "<<rollNumber;	//display roll number
        cout<<endl<<"Marks : "<<marks;	//display marks
        cout<<endl<<"Grade : "<<calculateGrade();	//display grade
    }
};

int main(){
	//declare a variable
	string name, studentClass;
	int roll_number, marks;
	
	cout<<endl<<"Enter Student name : ";	//print message
	cin>>name;	//get value from user
	cout<<endl<<"Enter Student class : ";
	cin>>studentClass;	//get value from user
	cout<<endl<<"Enter Student roll number : ";
	cin>>roll_number;	//get value from user
	cout<<endl<<"Enter Student marks : ";
	cin>>marks;	//get value from user
	
    //Creating a Student object
    Student student1(name, studentClass, roll_number, marks);

    //Display student information
    student1.displayInfo();	//call function
    return 0;
}

