//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
	int n, r, sum = 0, i;
    printf("Input a number: ");
    scanf("%d", &n);
    for(i=n; n!=0; n=n/10){
         r = n % 10; 
         sum = sum * 10 + r;
    }
    printf("\nReverse Number = %d", sum);
	return 0;
}
