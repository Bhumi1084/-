//Write a program in C to count the total number of alphabets, digits and special
//characters in a string.
#include<stdio.h>
void countChar(char ch[], int a, int d, int schar){
	int i;
	for(i=0; ch[i] != 0; i++){
		if((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')){
			a++;
		}
		else if(ch[i] >= '0' && ch[i] <= '9'){
			d++;
		}
		else{
			schar++;
		}
	}
	printf("\nalphabets : %d",a);
	printf("\ndigits : %d",d);
	printf("\nspecial characters : %d",schar);
}
int main(){
	char str[50];
	int a1=0, d1=0, schar1=0;
	printf("Enter a string : ");
	scanf("%s",&str);
	countChar(str, a1, d1, schar1);
	return 0;
}
