//Write a C program to check whether a triangle can be formed with the given
//values for the angles.
#include<stdio.h>
int main() {
    int angles1, angles2, angles3;	//declare a variable
    printf("Enter the 1 value of triangle : ");
    scanf("%d", &angles1);	//get value
    printf("\nEnter the 2 value of triangle : ");
    scanf("%d", &angles2);	//get a value
    printf("\nEnter the 3 value of triangle : ");
    scanf("%d", &angles3);	//get value
	
	//check condition
	//condition are true then print the message Triangle can be formed with the given value
	//condition are faulse goto the else part and print the message Triangle can not be formed with the given value
    if (angles1 + angles2 + angles3 == 180 && angles1 > 0 && angles2 > 0 && angles3 > 0) {
        printf("\nTriangle can be formed with the given value");
    } 
	else {
        printf("\nTriangle can not be formed with the given value");
    }
    return 0;
}
