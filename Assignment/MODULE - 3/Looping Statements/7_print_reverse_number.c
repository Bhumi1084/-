//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main(){
	int n, reverse, remainder;
  	printf("Enter number : ");
  	scanf("%d", &n);
  	while (n != 0) {
    	remainder = n % 10;
    	reverse = reverse * 10 + remainder;
    	n = n / 10;
  	}
  	printf("Reverse number = %d", reverse);
	return 0;
}
