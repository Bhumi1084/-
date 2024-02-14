/*
	A
	B C
	D E  F
	G H  I  J
	K L M N O
*/
#include<stdio.h>
int main(){
	int i,j;	//declare variable
	char character=65;	//declare variable
	//first loop are used to print row
	for(i=0; i<5; i++){
		//second loop are used to print column
		for(j=0; j<=i; j++){
			printf("%c ",character++);	//print pattern
		}
		printf("\n");	//\n used to next line
	}
	return 0;
}
