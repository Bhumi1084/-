//Write a C++ program to implement a class called Bank Account that has private member
//variables for account number and balance. Include member functions to deposit,
//withdraw money from the account
#include<iostream>
using namespace std;

//create class
class BankAccount{
	//private data member
	int account_no;
	float balance;
public:
	//create constructor
	BankAccount(int account_no1, float account_balance){
		//assigning variable
		account_no = account_no1;
		balance = account_balance;
	}
	
	//create function
	void deposit(float amount){
		balance = balance + amount;		//calculate deposit amount
		cout<<endl<<endl<<"Amount deposited successfully.\nNew balance : "<<balance;
	}
	
	void withdraw(float amount){
		if(amount <= balance){
			balance = balance - amount;	//calculate withdraw amount
			cout<<endl<<endl<<"Amount withdrawn successfully.\nNew balance : "<<balance;
		}
		else{
			cout<<endl<<"Can not withdraw";
		}
	}
	
	void displayAccInfo(){
		cout<<endl<<endl<<"Account Number : "<<account_no;	//dispaly account number
		cout<<endl<<"Total Balance : "<<balance;	//display total balance
	}
};
int main(){
	//declare variable
	int account_no;
	float balance, deposit_amount, withdraw_amount;
	
	cout<<endl<<"Enter Account Number : ";
	cin>>account_no;	//get value from user
	cout<<endl<<"Enter Balance : ";
	cin>>balance;	//get value from user
	BankAccount bankAcc(account_no, balance);	//create class object
	
	cout<<endl<<"Enter deposit amount : ";
	cin>>deposit_amount;	//get value from user
	cout<<endl<<"Entre withdraw amount : ";
	cin>>withdraw_amount;	//get value from user
	bankAcc.deposit(deposit_amount);	//call function
	bankAcc.withdraw(withdraw_amount);	//call function
	bankAcc.displayAccInfo();	//call function
	return 0;
}
