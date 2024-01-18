//WAP to print table up to given numbers
#include<iostream>
int main(){
	int n, i;
	std::cout<<"Enter a number of table : ";
	std::cin>>n;
	for(i=1; i<=10; i++){
		std::cout<<std::endl<<n<<"*"<<i<<"="<<n*i;
	}
	return 0;
}
