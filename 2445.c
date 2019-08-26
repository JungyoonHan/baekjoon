#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = n; i > 0; i--){
        for(int j = n; j >= i; j--){
            printf("*");
        }
        for(int k = 2*(i-1); k > 0; k--){
            printf(" ");
        }
        for(int l = n; l >= i; l--){
            printf("*");
        }
        printf("\n");
    }
    for(int m = n-1; m > 0; m--){
        for(int p = m; p > 0; p--){
            printf("*");
        }
        for(int q = 2*n; q > 2*m; q--){
            printf(" ");
        }
        for(int r = m; r > 0; r--){
            printf("*");
        }
        printf("\n");
    }
}