//Find character value from ascii
#include<stdio.h>
int main(){
	int no;
	printf("Enter ascii code : ");
	scanf("%d",&no);
	char ch = (char)no;
	printf("char = %c",ch);
	return 0;
}
