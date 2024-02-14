/*	1 	2  3  4  5  6  7  8  9 10
	36 37 38 39 40 	41 42 43 44 11
	35 64 65 66 67 	68 69 70 45 12
	34 63 84 85 86 	87 88 71 46 13
	33 62 83 96 97 	98 89 72 47 14
	32 61 82 95 100 99 90 73 48 15
	31 60 81 94 93 	92 91 74 49 16
	30 59 80 79 78 	77 76 75 50 17
	29 58 57 56 55 	54 53 52 51 18
	28 27 26 25 24 	23 22 21 20 19 */
#include <stdio.h>
int main() {
    int number = 10,k,i,j;	//declare a variable
    int array[number][number];	//create an array
    for(i = 0; i < number; i++){
        for(j = 0; j < number; j++){
            array[i][j] = 0;
        }
    }
    int num = 1;
    //logic for spiral pattern
    for(k = 0; k <= number / 2; k++){
        for(i = k; i < number - k; i++){
            array[k][i] = num++;
        }

        for(i = k + 1; i < number - k; i++){
            array[i][number - k - 1] = num++;
        }

        for(i = number - k - 2; i >= k; i--){
            array[number - k - 1][i] = num++;
        }

        for(i = number - k - 2; i > k; i--){
            array[i][k] = num++;
        }
    }

    for(i = 0; i < number; i++){
        for(j = 0; j < number; j++){
            printf("%3d ", array[i][j]);	//print the pattern
        }
        printf("\n");	//print next line
    }
    return 0;
}
