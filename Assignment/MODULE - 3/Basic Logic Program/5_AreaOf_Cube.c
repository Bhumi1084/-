//Find Area of Cube formula : a = 6a2
#include <stdio.h>
int main() {
    float number, answer;
    printf("Enter the a : ");	//give the value
    scanf("%f", &number);
    answer = 6 * (number * number);	//calculate area of cube using given formula
    printf("The volume of the cube is: %.2f\n", answer);	//display area of cube
    return 0;
}

