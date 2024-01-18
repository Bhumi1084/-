//Write a C program to calculate profit and loss on a transaction.
#include <stdio.h>
int main() {
    int costPrice, sellingPrice, profit, loss;
    printf("Enter the cost price : ");
    scanf("%d", &costPrice);
    printf("\nEnter the selling price: ");
    scanf("%d", &sellingPrice);

    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("\nProfit : %d", profit);
    } 
	else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("\nLoss : %d", loss);
    } 
	else {
        printf("\nNo profit, no loss");
    }
    return 0;
}
