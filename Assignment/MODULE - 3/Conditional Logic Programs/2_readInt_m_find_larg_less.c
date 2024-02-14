//Write a C program to read the value of an integer m and display the value of
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
#include<stdio.h>
int main(){
	int n,m;
	printf("enter the value of m : ");	//print value
	scanf("%d",&m);	//get value
	
	//check condition m greter then 0 to print n = 1 condition is faulse goto the else if part
	//m equal to 0 to print n = 0 condition is faulse goto the else part
	if(m>0){	
		n = 1;	
	}
	else if(m == 0){	//check condition
		n = 0;
	}
	else{
		n = -1;
	}
	printf("the value of n = %d",n);	//print message
	return 0;
}
