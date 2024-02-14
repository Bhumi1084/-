//Write a program in C to find the largest and smallest words in a string
#include<stdio.h>
#include<string.h>
int main(){
	int i, j, k, array, minIndex=0, maxIndex=0, max=0, min=0, length;	//declare a variable
	char string1[50], substring[50][50], c;	//create an array and variable
	printf("Enter a string : ");	//print message
	gets(string1);	//get value from user
	while(string1[k] != 0){
		j=0;
		//check condition
		while(string1[k] != ' ' && string1[k] != 0){
			//logic for find largest and smallest words
			substring[i][j] = string1[k];
			k++;
			j++;
		}
		substring[i][j]=0;
		i++;
		//check condition
		if(string1[k] != 0){
			k++;
		}
	}
	
	length = i;
	max = strlen(substring[0]);
	min = strlen(substring[0]);
	for(i=0; i<length; i++){
		array=strlen(substring[i]);
		//check condition
		if(array>max){
			max = array;
			maxIndex = i;
		}
		if(array<min){
			min = array;
			minIndex = i;
		}
	}
	printf("\nlargest word is : %s",substring[maxIndex]);	//display max index
	printf("\nSmallest word is : %s",substring[minIndex]);	//display min index
}
