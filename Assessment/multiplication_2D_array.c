#include<stdio.h>
int i, j, k;
void multi(int m1[][2], int m2[][2], int ans[][2], int r1, int c1, int c2){
	for(i=0; i<r1; i++){
		for(j=0; j<c2; j++){
			ans[i][j] = 0;
			for(k=0; k<c1; k++){
				ans[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}

void disp(int m[][2], int r, int c){
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m1[2][2], m2[2][2], ans[2][2], i, j, r=2, c=2;
	
	printf("\t\tMatrix Multiplication\n");
	printf("\n--------Matrix: 1--------");
	printf("\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Enter elements : ");
			scanf("%d", &m1[i][j]);
		}
	}
	printf("\n");
	disp(m1, r, c);
	
	printf("\n--------Matrix: 2--------");
	printf("\n");
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Enter elements : ");
			scanf("%d", &m2[i][j]);
		}
	}
	printf("\n");
	disp(m2, r, c);
	
	mult(m1, m2, ans, r, c, c);
	printf("\n---------Result : Multiplication Matrix---------");
	printf("\n");
	disp(ans, r, c);
	return 0;
}
