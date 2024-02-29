#include <stdio.h>

//Function to perform matrix multiplication
void multiplyMatrices(int rows1, int cols1, int mat1[rows1][cols1], int rows2, int cols2, int mat2[rows2][cols2], int result[rows1][cols2]{
    //check condition 
    //first matrix number of column and second matrix number of rows are equal or not
    if(cols1 != rows2{
        printf("\nEnter 1 matrix number of column and 2 matrix number of row are equal");
        return;
    }

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            result[i][j] = 0;
            for(int k = 0; k < cols1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];    //calculate multiplication of matrix
            }
        }
    }
}

//Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);    //display value
        }
        printf("\n");
    }
}

int main(){
    int rows1, cols1, rows2, cols2;
    printf("\t\t\t\t\tMatrix Multiplication");
    printf("\nEnter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &rows1, &cols1); //get value from user

    printf("\nEnter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &rows2, &cols2); //get value from user

    //Check if matrices can be multiplied
    if(cols1 != rows2){
        printf("\nEnter 1 matrix number of column and 2 matrix number of row are equal");
        return 1;
    }

    //Declare matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    //Enter value of first matrix
    printf("\n---------------Matrix: 1---------------");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            printf("\nEnter elements : ");
            scanf("%d", &matrix1[i][j]);
        }
    }
    displayMatrix(rows1, cols1, matrix1);   //call function

    //Enter value of second matrix
    printf("\n---------------Matrix: 2---------------");
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            printf("\nEnter elements : ");
            scanf("%d", &matrix2[i][j]);
        }
    }
    displayMatrix(rows2, cols2, matrix2);   //call function

    //Multiply matrix
    printf("\n---------------Result : Multiplication Matrix---------------");
    multiplyMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, result); //call function

    //Display result
    printf("Result of matrix multiplication:\n");
    displayMatrix(rows1, cols2, result);    //call function
    return 0;
}
