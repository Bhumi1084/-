//WAP in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
void countVowel(char ch[], int v, int c){
	int i;
	for(i=0; ch[i] != 0; i++){
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || 
		ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
			v++;
		}
		else{
			c++;
		}
	}
	printf("\nTotal Vowel : %d",v);
	printf("\nTotal consonants : %d",c);
}
int main(){
	char s1[50];
	int v1=0, c1=0;
	printf("Enter a string : ");
	scanf("%s",&s1);
	countVowel(s1, v1, c1);
	return 0;
}
