#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    for(int i = n; i > 0; i--){
        for(int j = i; j < n; j++){
            printf(" ");
        }
        for(int k = 2*i-1; k > 0; k--){
            printf("*");
        }
        printf("\n");
    }
}