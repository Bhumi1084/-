//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main(){
	int no1,no2,no3;
	printf("Enter the number : ");
	scanf("%d",&no1);
	
	printf("\nN^1 = %d",no1);
	
	no2 = no1 * no1;
	printf("\nN^2 = %d",no2);
	
	no3 = no1 * no1 * no1;
	printf("\nN^3 = %d",no3);
	return 0;
}
