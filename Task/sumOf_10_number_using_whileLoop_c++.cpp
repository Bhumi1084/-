//Calculate sum of 10 numbers using of while loop
#include<iostream>
int main(){
	int n, i=1, sum=0;
	while(i<=10){
		std::cout<<"Enter a number : ";
		std::cin>>n;
		sum=sum+n;
		i++;
	}
	std::cout<<"sum = "<<sum;
	return 0;
}
