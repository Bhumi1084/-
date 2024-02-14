//WAP in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
void countVowel(char ch[], int vowel, int consonant){
	int i;
	for(i=0; ch[i] != 0; i++){
		//check condition
		//condition are true then increment in vowel otherwise increment in consonant
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || 
		ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U'){
			vowel++;
		}
		else{
			consonant++;
		}
	}
	printf("\nTotal Vowel : %d",vowel);	//display total number of vowel
	printf("\nTotal consonants : %d",consonant);	//display total number of consonant
}
int main(){
	char string1[50];	//create an array
	int vowel1=0, consonant1=0;	//create a variable
	printf("Enter a string : ");
	scanf("%s",&string1);	//get value from user
	countVowel(string1, vowel1, consonant1);	//call function
	return 0;
}
