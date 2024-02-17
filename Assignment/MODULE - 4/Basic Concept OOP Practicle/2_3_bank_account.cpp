//Define a class to represent a bank account. Include the following members:
	// Data Member:
		//-Name of the depositor
		//-Account Number
		//-Type of Account
		//-Balance amount in the account
	//Member Functions
		//-To assign values
		//-To deposited an amount
		//-To withdraw an amount after checking balance
		//-To display name and balance
#include<iostream>
using namespace std;

//create class
class BankAccount{
	//declare variable
	string deposite_name;
	int account_no;
	string account_type;
	int balance;
	
public : 
	//create function
	void assign_value(string deposite_name1, int account_no1, string account_type1, int balance1){
		//assign variable
		deposite_name = deposite_name1;
		account_no = account_no1;
		account_type = account_type1;
		balance = balance1;
	}
	
	//create function
	void deposited(int amount){
		balance = balance + amount;	//calculate deposited amount
		cout<<endl<<"Amount deposited successfully."<<endl<<"New balance :"<<balance<<endl;
	}
	
	//create function
	void withdraw(int amount){
		//check condition
		if(amount > balance){
			cout<<endl<<"Cannot withdraw."<<endl;
		}
		else{
			balance = balance - amount;	//calculate withdraw amount 
			cout<<endl<<"Amount withdrawn successfully."<<endl<<"New balance :"<<balance<<endl;
		}
	}
	
	//create function
	void display(){
		cout<<endl<<endl<<"Depositor Name : "<<deposite_name;	//display depositor name
		cout<<endl<<"Account Number : "<<account_no;	//display account number
		cout<<endl<<"Account Type : "<<account_type;	//display account type
		cout<<endl<<"Balance : "<<balance;	//display total balance
	}
}myaccount;	//create object

int main(){
	//BankAccount myaccount;
	//declare a variable
	string name, account_type;
	int account_no, balance, deposite_amount, withdraw_amount;
	cout<<"\nEnter depositor name : ";
	cin>>name;	//get value from user
	cout<<"\nEnter account number : ";
	cin>>account_no;	//get value from user
	cout<<"\nEnter account type : ";
	cin>>account_type;	//get value from user
	cout<<"\nEnter your total balance : ";
	cin>>balance;	//get value from user
	
	myaccount.assign_value(name, account_no, account_type, balance);	//call function
	
	cout<<"\nEnter deposite amount : ";
	cin>>deposite_amount;	//get value from user
	cout<<"\nEnter withdraw amount : ";
	cin>>withdraw_amount;	//get value from user

	myaccount.deposited(deposite_amount);	//call function
	myaccount.withdraw(withdraw_amount);	//call function
	myaccount.display();	//call function
	return 0;
}
