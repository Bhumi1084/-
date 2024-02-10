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
class BankAccount{
	string dep_nm;
	int acc_no;
	string atype;
	int balance;
	
public : 
	void assign_value(string dnm, int ano, string acc_type, int bal){
		dep_nm = dnm;
		acc_no = ano;
		atype = acc_type;
		balance = bal;
	}
	
	void deposited(int amount){
		balance = balance + amount;
		cout<<"\nAmount deposited successfully."<<endl<<"New balance :"<<balance<<endl;
	}
	
	void withdraw(int amount){
		if(amount > balance){
			cout<<"\nCannot withdraw."<<endl;
		}
		else{
			balance = balance - amount;
			cout<<"\nAmount withdrawn successfully."<<endl<<"New balance :"<<balance<<endl;
		}
	}
	
	void display(){
		cout<<"\n\nDepositor Name : "<<dep_nm<<endl;
		cout<<"\nAccount Number : "<<acc_no<<endl;
		cout<<"\nAccount Type : "<<atype<<endl;
		cout<<"\nBalance : "<<balance;
	}
}myaccount;

int main(){
	//BankAccount myaccount;
	string nm, acco_type;
	int account_no, bal, deposite_amount, withdraw_amount;
	cout<<"\nEnter depositor name : ";
	cin>>nm;
	cout<<"\nEnter account number : ";
	cin>>account_no;
	cout<<"\nEnter account type : ";
	cin>>acco_type;
	cout<<"\nEnter your total balance : ";
	cin>>bal;
	
	//myaccount.assign_value("Bhumi",50000,"Saving",1000);
	myaccount.assign_value(nm, account_no, acco_type, bal);
	//myaccount.display();
	
	cout<<"\nEnter deposite amount : ";
	cin>>deposite_amount;
	cout<<"\nEnter withdraw amount : ";
	cin>>withdraw_amount;
	
	//myaccount.deposited(500);
	//myaccount.withdraw(200);
	myaccount.deposited(deposite_amount);
	myaccount.withdraw(withdraw_amount);
	myaccount.display();
	return 0;
}
