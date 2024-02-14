// WAP to make add, Sub and multiplication of two matrix using 2-D Array
#include<stdio.h>
int i, j, k;	//declare a variable
//create a function without return type and with parameter
void addition(int matrix1[][3], int matrix12[][3], int answer[][3], int row, int column){
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			answer[i][j] = matrix1[i][j] + matrix12[i][j];	//calculate addition
		}
	}
}

//create a function without return type and with parameter
void subtraction(int matrix1[][3], int matrix12[][3], int answer[][3], int row, int column){
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			answer[i][j] = matrix1[i][j] - matrix12[i][j];	//calculate subtraction
		}
	}
}

//create a function without return type and with parameter
void multiplication(int matrix1[][3], int matrix12[][3], int answer[][3], int row1, int column1, int column12){
	for(i=0; i<row1; i++){
		for(j=0; j<column2; j++){
			answer[i][j] = 0;
			for(k=0; k<column1; k++){
				answer[i][j] += matrix1[i][k] * matrix12[k][j];	//calculate multiplication
			}
		}
	}
}

//create a function without return type and with parameter
void display(int matrix[][3], int row, int column){
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			printf("%d\t", matrix[i][j]);	//display matrix
		}
		printf("\n");
	}
}

int main(){
	int matrix1[3][3], matrix2[3][3], answer[3][3], i, j, row=3, column=3;
	
	printf("Enter value of first matrix : ");	//print message
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			scanf("%d", &matrix1[i][j]);	//get value from user and store in array
		}
	}
	
	printf("Enter value of second matrix : ");	//print message
	for(i=0; i<row; i++){
		for(j=0; j<column; j++){
			scanf("%d", &matrix2[i][j]);	//get value from user and store in array
		}
	}
	
	//addition
	addition(matrix1, matrix2, answer, row, column);	//call function
	printf("\n addition : \n");
	display(answer, row, column);	//call function
	
	//subtraction
	subtraction(matrix1,matrix2, answer, row, column);	//call function
	printf("\n subtraction : \n");
	display(answer, row, column);	//call function
	
	multiplication(matrix1, matrix2, answer, row, column, column);	//call function
	printf("\n multiplication : \n");
	display(answer, row, column);	//call function
	return 0;
}
