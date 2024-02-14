//Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main(){
	int number, temp, reminder, revers, c=0;	//declare a variable
	while(c<3){
   		printf("\nEnter a number = ");	//print message
   		scanf("%d", &number);	//get value from user
   		temp = number;
   		revers = 0;
   		while(temp>0){
   			//logic for palindrome number
    		reminder = temp % 10;
      		revers = revers * 10 + reminder;
      		temp = temp / 10;
   		}
   		printf("Reversed number is = %d", revers);	//print reversed number
   		//check condition
   		//condition is true then print Number is Palindrome
   		//condition is false then print Number is not the Palindrome
   		if ( number == revers )
      		printf("\nNumber is Palindrome");
   		else
      		printf("\nNumber is not the Palindrome");
      	c++;
    }
   return 0;
}
