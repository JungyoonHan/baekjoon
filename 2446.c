#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = n; i > 1; i--){
        for(int j = n; j > i; j--){
            printf(" ");
        }
        for(int k = 2*i-1; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
    for(int l = 1; l <= n; l++){
        for(int m = n; m > l; m--){
            printf(" ");
        }
        for(int p = 0; p < 2*l-1; p++){
            printf("*");
        }
        printf("\n");
    }
}