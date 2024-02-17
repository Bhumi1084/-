//Assume a class cricketer is declared. Declare a derived class batsman from
//cricketer. Data member of batsman. Total runs, Average runs and best
//performance. Member functions input data, calculate average runs, Display
//data. (Single Inheritance)
#include <iostream>
using namespace std;
//create base class
class Cricketer{  
public:
    string name;
    int age;
    //create function
    void input_info(){
        cout<<"Enter name : ";
        cin>>name;	//get value from user
        cout<<"Enter age : ";
        cin>>age;	//get value from user
    }
};

//create derived class
class Batsman : public Cricketer{
public:
    int total_runs;
    double average_runs;
    int best_performance;
    void input_data(){
        input_info();	//call function
        cout<<"Enter total runs: ";
        cin>>total_runs;	//get value from user
        cout<<"Enter best performance: ";
        cin>>best_performance;	//get value from user
        calculate_average_runs();	//call function
    }

    void calculate_average_runs(){
    	//check condition
        if (total_runs != 0){
            average_runs = static_cast<double>(total_runs) / 5;	//calculate average runs
        }
    }

    void display_data(){
    	//display data
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Total Runs : "<<total_runs<<endl;
        cout<<"Average Runs : "<<average_runs<<endl;
        cout<<"Best Performance : "<<best_performance<<endl;
    }
};

int main() {
    Batsman batsman;	//create object
    cout<<"Enter Batsman's Details"<< endl;
    batsman.input_data();	//call function

    cout<<"Batsman's Data"<<endl;
    batsman.display_data();	//claa function
    return 0;
}
