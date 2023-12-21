//Check Number is prime or not
#include <stdio.h>
int main() {
	int no, i, temp=1;
	printf("Enter a number : ");
    scanf("%d", &no);
    
    if(no<=1){
    	temp=0; //0 & 1 not prime
	}
	else{
		for(i = 2; i * i <= no; i++){
			if (no % i == 0) {
            	temp = 0;
                break;
        	}
		}
	}
	if (temp) {
        printf("\n%d is a prime number", no);
    } 
	else {
        printf("\n%d is not a prime number", no);
    }
	return 0;
}
