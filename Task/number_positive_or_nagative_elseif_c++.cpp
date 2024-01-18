//WAP to check whether a number is negative, positive or zero.
#include<iostream>
int main(){
	int n;
	std::cout<<"Enter a number : ";
	std::cin>>n;
	if(n == 0){
		std::cout<<"Number is zero";
	}
	else if(n > 0){
		std::cout<<"Number is positive";
	}
	else{
		std::cout<<"Number is nagative";
	}
	return 0;
}
