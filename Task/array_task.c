#include <stdio.h>
int main(){
    int n[5],i;
    for (i = 0; i < 5; i++){
        printf("Enter %d number = ",i+1);
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 5; i++){
        printf("\n[%d] index value = %d ",i, n[i]);
    }
    return 0;
}
