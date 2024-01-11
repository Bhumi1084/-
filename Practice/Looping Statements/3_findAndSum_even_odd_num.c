//WAP to take 10 no. Input from user find out below values
	//a. How many Even numbers are there
	//b. How many odd numbers are there
	//c. Sum of even numbers
	//d. Sum of odd numbers
#include<stdio.h>
int main(){
	int i=0, num[10], evenCount = 0, oddCount = 0, sumEven=0, sumOdd=0;
	for(i=0; i<10; i++){
		printf("Enter 10 Number %d :",i);
		scanf("%d", &num[i]);
		
		if (num[i] % 2 == 0) {
            evenCount++;
            sumEven += num[i];
        } 
		else {
            oddCount++;
            sumOdd += num[i];
        }
	}
	printf("\nNumber of even numbers: %d", evenCount);
    printf("\nNumber of odd numbers: %d", oddCount);
    printf("\nSum of even numbers: %d", sumEven);
    printf("\nSum of odd numbers: %d", sumOdd);
	return 0;
}
