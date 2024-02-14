//Accept 5 names from user at run time.
#include <stdio.h>
int main() {
    char name[5][50];	//create array
    int i;	//declare a variable
    for (i=0; i<5; i++) {
        printf("Enter %d name = ", i + 1);	//print message
        scanf("%s", &name[i]);	//get value from user and store in array
    }
    for (i=0; i<5; i++) {
        printf("\n%s", name[i]);	//print name
    }
    return 0;
}
