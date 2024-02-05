#include<stdio.h>
//declare global variable
int i, j, k;

//here function perform matrix multiplication
void multi(int m1[][2], int m2[][2], int ans[][2], int r1, int c1, int c2){
	//iterate through each element of the resulting matrix
	for(i=0; i<r1; i++){
		for(j=0; j<c2; j++){
			ans[i][j] = 0;
			//perform the dot product for the current element
			for(k=0; k<c1; k++){
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}

//here function perform display the matrix
void disp(int m[][2], int r, int c){
	//iterate through each element and print
	for(i=0; i<r; i++){	//this loop is print the row
		for(j=0; j<c; j++){	//this loop is prin the column
			printf("%d\t", m[i][j]);	//print the matrix
		}
		printf("\n");	//here \n used to print next line
	}
}

int main(){
	//declare matrices and initialize row and column variables
	int m1[2][2], m2[2][2], ans[2][2], i, j, r=2, c=2;
	
	printf("\t\tMatrix Multiplication\n");
	printf("\n--------Matrix: 1--------");
	printf("\n");
	for(i=0; i<2; i++){	//i used to row
		for(j=0; j<2; j++){	//j used to column
			printf("Enter elements : ");	//print message
			scanf("%d", &m1[i][j]);		//get first matrix value from user
		}
	}
	printf("\n");
	disp(m1, r, c);	//display first matrix
	
	printf("\n--------Matrix: 2--------");
	printf("\n");
	for(i=0; i<2; i++){	//i used to row
		for(j=0; j<2; j++){	//j used to column
			printf("Enter elements : ");
			scanf("%d", &m2[i][j]);		//get second matrix value from user
		}
	}
	printf("\n");
	disp(m2, r, c);		//display second matrix
	
	mult(m1, m2, ans, r, c, c);	//calculate matrix multiplication
	printf("\n---------Result : Multiplication Matrix---------");
	printf("\n");
	disp(ans, r, c);	//display matrix multiplication
	return 0;
}
