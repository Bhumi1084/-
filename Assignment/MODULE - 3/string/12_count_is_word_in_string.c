//WAP in C to find the no. of times a given word 'is' appears in the given string
#include<stdio.h>
#include<string.h>
int main(){
	char string[50], word[50];	//create an array
	int number, array[50], i, j, k=0, length, found=0, t=0;
	printf("Enter a string : ");
	gets(string);	//get value from user
	printf("Enter a word : ");
	gets(word);	//get value from user
	for(i=0; string[i]; i++){
		if(string[i]==' '){
			array[k++]=i;
		}
	}
	array[k++]=i;
	j=0;
	for(i=0; i<k; i++){
		number=array[i]-j;
		if(number==strlen(word)){
			t=0;
			for(length=0; word[length]; length++){
				if(string[length+j]==word[length]){
					t++;
				}
			}
			if(t==strlen(word)){
				found++;
			}
		}
		j=array[i]+1;
	}
	printf("total is word = %d",found);	//display total word
	return 0;
}
