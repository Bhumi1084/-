//WAP to print table up to given numbers
#include <stdio.h>  
int main()  
{  
    int number, i;	//declare variable
    printf ("Enter a number of table: ");  //print message
    scanf ("%d", &number);		//get value from user
    for (i = 1; i <= 10; i++){  
        printf ("\n%d * %d = %d", number, i, (number*i));  //display table
    }  
    return 0;  
} 
