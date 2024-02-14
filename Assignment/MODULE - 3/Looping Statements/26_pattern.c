//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
   int i,j,n;	//declare a variable
   printf("Enter a number = ");	//print message
   scanf("%d", &n);	//get value from user
   
   for(i=1; i<=n; i++){
   		printf("(");
    	for(j=1; j<=i; j++){
			printf("%d",j);	//print number	
        	if (j<i)
        		printf("+");	//print + 
        	else if(j=i)
	        	printf(")");	//print )	
		}
		//check condition
		if (i<n)
        	printf(" + ");	//print +
    	else if(i=n)
        	printf(" ");	//print space
   }
   return 0;
}
