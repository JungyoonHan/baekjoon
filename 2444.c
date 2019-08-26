#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j > 0; j--){
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++){
            printf("*");
        }
        printf("\n");
    }
    for(int l = n-1; l > 0; l--){
        for(int m = l; m < n; m++){
            printf(" ");
        }
        for(int o = 2*l-1; o > 0; o--){
            printf("*");
        }
        printf("\n");
    }
}