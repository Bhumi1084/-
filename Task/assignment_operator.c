// WAP to use of assignment operator
#include<stdio.h>
int main(){
	int a, b, add, mul, mod, sub;
	float div;
	printf("Enter a & b value : ");
	scanf("%d %d", &a, &b);
	
	add = a+=b; //5+=2 => 7
	printf("\na+=b : %d",add);
	
	sub = a-=b; // 5-=2 => 3
	printf("\na-=b : %d",sub);
	
	mul = a*=b; // 5*=2 => 10
	printf("\na*=b : %d",mul);
	
	mod = a%=b; // 5%=2 => 1
	printf("\na %= b : %d",mod);
	
	div = a/=b; // 5/=2 => 2.5
	printf("\na /= b : %f",div);
	return 0;
}
