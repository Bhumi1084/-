//WAP to input the week number and print week day
#include<stdio.h>
int main() {
    int weekNo;	//declare a variable
    printf("Enter the week number : ");	//print message
    scanf("%d", &weekNo);	//get value

	//choice any one case
    switch (weekNo) {
        case 1:
            printf("\nMonday");	//print Monday
            break;	//break this case
        case 2:
            printf("\nTuesday");	//print Tuesday
            break;	//break this case
        case 3:
            printf("\nWednesday");	//print Wednesday
            break;	//break this case
        case 4:
            printf("\nThursday");
            break;
        case 5:
            printf("\nFriday");
            break;
        case 6:
            printf("\nSaturday");
            break;
        case 7:
            printf("\nSunday");
            break;
        default:	//this is part are used to enter invalide choice 
            printf("\nInvalid week number");	//print message
    }
    return 0;
}
