//Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
using namespace std;

//create base class
class StudentInfo{
public:
    string name;
    int rollNumber;
    
    //create function
    void inputInfo(){
        cout<<endl<<"Enter student name : ";
        cin>>name;	//get value from user
        cout<<endl<<"Enter roll number : ";
        cin>>rollNumber;	//get value from user
    }

    void displayInfo(){
        cout<<endl<<"Student Name : "<<name;	//display student name
        cout<<endl<<"Roll Number : "<<rollNumber;	//display roll number
    }
};

//create base class
class Marks{
public:
    float mark1, mark2, mark3;
	int total;
	//create function
    void inputMarks(){
        cout<<endl<<"Enter marks for subject 1 : ";
        cin>>mark1;	//get value from user
        cout<<endl<<"Enter marks for subject 2 : ";
        cin>>mark2;	//get value from user
        cout<<endl<<"Enter marks for subject 3 : ";
        cin>>mark3;	//get value from 
    }

    void displayMarks(){
        cout<<endl<<"Subject 1 : "<< mark1;	//display 1 subject marks
        cout<<endl<<"Subject 2 : "<< mark2;	//display 2 subject marks
        cout<<endl<<"Subject 3 : "<< mark3;	//display 3 subject marks
    }
    
    void totalMarks(){
    	total = mark1+mark2+mark3;	//calculate total subject marks
    	cout<<endl<<"Total : "<<total;	//display total of marks
	}
};

//create derived class
class StudentMarkSheet : public StudentInfo, public Marks{
public:
	//create function
    void inputStudentMarkSheet(){
        inputInfo();	//call function
        inputMarks();	//call function
    }

	//display student marksheet information
    void displayStudentMarkSheet(){
        displayInfo();	//call function
        displayMarks();	//call function
        totalMarks();	//call function
    }
};

int main() {
    StudentMarkSheet student;	//create object

    cout<<endl<<"----------Enter student information and marks----------";
    student.inputStudentMarkSheet();	//call function
    cout<<endl<<"----------Student Mark Sheet----------";
    student.displayStudentMarkSheet();	//call function
    return 0;
}
