//1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include <stdio.h>
int main(){
    int number, i;	//declare variable
    printf("Enter the value of n: ");
    scanf("%d", &number);	//get value from user
    for(i = 1; i <= number; ++i){
        printf("%d/%d", i, i + 1);	//print number
        //check condition
        if(i<number) {
            if(i % 2 == 0){
                printf(" + ");	//print +
            }
			else{
                printf(" - ");	//print -
            }
        }
    }
    return 0;
}
