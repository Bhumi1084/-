//WAP to print factorial of given number
#include<stdio.h>
int main(){
	int n, i, fact=1;
	printf("Enter number : ");
	scanf("%d", &n);
	if (n < 0){
		printf("Enter only integer number");
	}        
    else {
        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        printf("Factorial = %d", fact);
    }
	return 0;
}
