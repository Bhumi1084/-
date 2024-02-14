//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
	int i, number;	//declare a variable
	printf("Enter number = ");	//print message
	scanf("%d",&number);	//get value from user
	for(i=1; i<=number; i++){
		printf("%d + ",i);	//print series		
//		if(i!=n)
//			printf(" + ");
	}
	return 0;
}
