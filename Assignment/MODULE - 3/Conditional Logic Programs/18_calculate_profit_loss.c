//Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
int main() {
    int costPrice, sellingPrice, profit, loss;	//declare variable
    printf("Enter the cost price : ");
    scanf("%d", &costPrice);	//get value
    printf("\nEnter the selling price: ");
    scanf("%d", &sellingPrice);	//get value

	//check condition
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;	//calculate profit
        printf("\nProfit : %d", profit);	//display profit for costprice gretter then sellingprice
    } 
	else if (costPrice > sellingPrice){
        loss = costPrice - sellingPrice;	//calculate loss
        printf("\nLoss : %d", loss);	//display loss for sellingprice gretter then costprice
    } 
	else {
        printf("\nNo profit, no loss");	//display this message are all condition is fulase
    }
    return 0;
}
