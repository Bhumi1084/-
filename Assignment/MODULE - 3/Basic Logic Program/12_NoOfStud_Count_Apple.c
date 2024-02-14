//Accept number of students from user. I need to give 5 apples to each student. 
//How many apples are required?
#include<stdio.h>
int main(){
	int students,totalApples;
    printf("Enter the number of students: ");
    scanf("%d", &students);	//get the value from user	students = 5

    totalApples = students * 5;	//count the total apples	totalApples = 5 * 5
    //display total apples
	printf("\nTotal apples = %d", totalApples);	//Total apples = 10
    return 0;
}
