//Accept 3 numbers from user using while loop and check each numbers palindrome
#include<stdio.h>
int main(){
	int n, temp, rem, rev, c=0;
	while(c<3){
   		printf("\nEnter a number = ");
   		scanf("%d", &n);
   		temp = n;
   		rev = 0;
   		while(temp>0){
    		rem = temp % 10;
      		rev = rev * 10 + rem;
      		temp = temp / 10;
   		}
   		printf("Reversed number is = %d", rev);
   		if ( n == rev )
      		printf("\nNumber is Palindrome");
   		else
      		printf("\nNumber is not the Palindrome");
      	c++;
    }
   return 0;
}
