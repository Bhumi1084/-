//WAP to find the largest of three numbers.
#include <stdio.h>
int main() {
    int num1, num2, num3, largest;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
	
	//largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
	if (num1 >= num2 && num1 >= num3) {
        printf("num1 is largest");
    } 
	else if (num2 >= num1 && num2 >= num3) {
        printf("num2 is largest");
    } 
	else {
        printf("num3 is largest");
    }
    
	//printf("The largest number is: %d\n", largest);
    return 0;
}

