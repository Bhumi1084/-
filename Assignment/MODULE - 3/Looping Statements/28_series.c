//1 2 3 6 9 18 27 54...
#include <stdio.h>
int main() {
    int number1=1, number2=2, i, number;	//declare variable
    printf("Enter term of no = ");
    scanf("%d",&number);	//get value from user
    printf("%d %d ",number1, number2);	//print series
    for(i=3;i<=number;i++)
    {
    	//check condition
        if(i%2==1)
        {
            number1=number1*3;
            printf("%d ",number1);	//print odd number
        }
        else
        {
            number2=number2*3;
            printf("%d ",number2);	//print even number
        }
    }
    return 0;
}
