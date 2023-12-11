//Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable

#include<stdio.h>
int main(){
    int a1, a2, temp; 
    printf("swap 2 numbers with using 3rd variable.");
    printf("\nEnter two number : ");
    scanf("%d %d", &a1, &a2);
    printf("Before Swappingn Number \na1 = %d\na2 = %d \n", a1, a2);
    temp = a1;
    a1 = a2;
    a2 = temp;
    printf("After Swappingn Number \na1= %d\na2 = %d\n", a1, a2);

	int a,b;
	printf("\nswap 2 numbers without using 3rd variable.");
	printf("\nEnter two number : ");
	scanf("%d %d",&a,&b);
	printf("Before Swappingn Number \na = %d \nb = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swappingn Number \na = %d \nb = %d", a, b);
	return 0;
}
