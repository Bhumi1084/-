//Write a C++ program to implement a class called Bank Account that has private member
//variables for account number and balance. Include member functions to deposit,
//withdraw money from the account
#include<iostream>
using namespace std;
class BankAccount{
	int acc_no;
	float bal;
public:
	BankAccount(int acc_n1, float acc_bal){
		acc_no = acc_n1;
		bal = acc_bal;
	}
	
	void deposit(float amount){
		bal = bal + amount;
		cout<<endl<<endl<<"Amount deposited successfully.\nNew balance : "<<bal;
	}
	
	void withdraw(float amount){
		int a;
		if(amount <= bal){
			bal = bal - amount;
			cout<<endl<<endl<<"Amount withdrawn successfully.\nNew balance : "<<bal;
		}
		else{
			cout<<endl<<"Can not withdraw";
		}
	}
	
	void dispAccInfo(){
		cout<<endl<<endl<<"Account Number : "<<acc_no;
		cout<<endl<<"Total Balance : "<<bal;
	}
};
int main(){
	int ano;
	float abal, damount, wamount;
	
	cout<<endl<<"Enter Account Number : ";
	cin>>ano;
	cout<<endl<<"Enter Balance : ";
	cin>>abal;	
	BankAccount bankAcc(ano, abal);
	
	cout<<endl<<"Enter deposit amount : ";
	cin>>damount;
	cout<<endl<<"Entre withdraw amount : ";
	cin>>wamount;
	bankAcc.deposit(damount);
	bankAcc.withdraw(wamount);
	bankAcc.dispAccInfo();
	return 0;
}
