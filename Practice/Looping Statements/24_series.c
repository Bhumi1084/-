//1 + 2 + 3 + 4 + 5 + ... + n
#include<stdio.h>
int main(){
	int i, n;
	printf("Enter number = ");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		printf("%d + ",i);
//		if(i!=n)
//			printf(" + ");
	}
	return 0;
}
