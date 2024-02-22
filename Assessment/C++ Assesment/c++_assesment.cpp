#include<iostream>
using namespace std;

//create class
class LectureDetails{
	//declare a variable
	string lecturer_name, subject_name, course_name;
	int lecture_number;
public:
	//create a constructor
	LectureDetails(){}
	
	//Parameterized constructor to initialize lecture details
		
	LectureDetails(string lecturer, string subject, string course, int lectures)
        : lecturer_name(lecturer), subject_name(subject), course_name(course), lecture_number(lectures) {}
        
	//Function to get lecture details from user
	void addLectureDetails(){
		cout<<endl<<"Enter lecture name : ";
		cin>>lecturer_name;	//get value from user
		cout<<endl<<"Enter subject name : ";
		cin>>subject_name;	//get value from user
		cout<<endl<<"Enter coursr name : ";
		cin>>course_name;	//get value from user
		cout<<endl<<"Enter number of lecture : ";
		cin>>lecture_number;	//get value from user
	}
	
	//Function to display lecturer details
	void displayLectureDetail(){
		cout<<endl<<"Lecture Name : "<<lecturer_name;
		cout<<endl<<"Subject Name : "<<subject_name;
		cout<<endl<<"Course Name : "<<course_name;
		cout<<endl<<"Lecture Number : "<<lecture_number;
	}
};

int main(){
	//Create an array of LectureDetails objects for 5 lecturers
	//LectureDetails lecturer[5];
	
	//Use a for loop to get details from user
	for(int i=0; i<5; i++){
		cout<<"Enter details for lecture "<<(i+1);
		lecturer[i].addLectureDetails();	//call function
		cout<<endl;
	}
	
	//Display details of all lecturers
	for(int i=0; i<5; i++){
		cout<<endl<<"Details of lecture "<<(i+1);
		lecturer[i].displayLectureDetail();	//call function
		cout<<endl;
	}
	return 0;
}
