//Accept number of students from user. I need to give 5 apples to each student. 
//How many apples are required?
#include<stdio.h>
int main(){
	int students,totalApples;
    printf("Enter the number of students: ");
    scanf("%d", &students);

    totalApples = students * 5;
    printf("\nTotal apples = %d", totalApples);
    return 0;
}
