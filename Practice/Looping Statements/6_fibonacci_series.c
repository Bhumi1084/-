//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main(){
	int n, n1 = 0, n2 = 1, n3, i;
	printf("Enter the number of terms : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        if (i <= 1) {
            n3 = i;
        }
		else{
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("%d ", n3);
    }
	return 0;
}
