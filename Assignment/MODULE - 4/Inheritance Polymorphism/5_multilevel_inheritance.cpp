//Assume that the test results of a batch of students are stored in three different
//classes. Class Students are storing the roll number. Class Test stores the
//marks obtained in two subjects and class result contains the total marks
//obtained in the test. The class result can inherit the details of the marks
//obtained in the test and roll number of students. (Multilevel Inheritance)
#include <iostream>
using namespace std;
class Student{
//protected data member
protected:
    int rollNumber;
public:
	//create function
    void input_roll_number(){
        cout<<"Enter roll number : ";
        cin>>rollNumber;	//get value from user
    }
};

//create derivade class
class Test : public Student{
//protected data member
protected:
    float subject1Marks;
    float subject2Marks;
public:
	//create function
    void input_marks(){
        cout<<"Enter marks for subject 1 : ";
        cin>>subject1Marks;	//get value from user
        cout<<"Enter marks for subject 2 : ";
        cin>>subject2Marks;	//get value from user
    }
};

//create derivade class
class Result : public Test{
//private data member
private:
    float totalMarks;
public:
	//create function
    void calculate_total_marks(){
        totalMarks = subject1Marks + subject2Marks;	//calculate total marks
    }
	
    void display_result(){
        cout<<"Roll Number : "<<rollNumber<<endl;	//display roll number
        cout<<"Subject 1 Marks : "<<subject1Marks<<endl;	//display subject 1 marks
        cout<<"Subject 2 Marks : "<<subject2Marks<<endl;	//display subject 2 marks
        cout<<"Total Marks : "<<totalMarks<<endl;	//display total marks
    }
};

int main(){
    Result result;	//create object
    result.input_roll_number();	//call function
    result.input_marks();	//call function

    result.calculate_total_marks();	//call function
    result.display_result();	//call function
    return 0;
}
