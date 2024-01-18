//Accept 5 numbers from user and perform sum of array
#include<iostream>
int main(){
	int n[5], i, sum;
	std::cout<<"Enter 5 number : ";
	for(i=0; i<5; i++){
		std::cin>>n[i];
	}
	
	sum = 0;
	for(i=0; i<5; i++){
		sum = sum + n[i];
	}
	
	std::cout<<"sum = "<<sum;
	return 0;
}
