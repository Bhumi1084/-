#include<stdio.h>
char temp;
void reverseStr(char ch[],int s,int a){
	if(s >= a){
		return;
	}
	temp = ch[s];
	ch[s] = ch[a];
	ch[a] = temp;
	reverseStr(ch,s+1,a-1);
}
int main(){
	char iStr[] = "ABCDE";
	int l = 0;
	while(iStr[l] != 0){
		l++;
	}
	reverseStr(iStr,0,l-1);
	printf("\nReverse String = %s",iStr);
}
