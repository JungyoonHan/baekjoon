#include <stdio.h>
int main(void){
    int n, a, b;
    scanf("%d%d",&n,&a);
    for(int i = 1; i <= n; i++){
        scanf("%d",&b);
        if(b < a){
            printf("%d ",b);
        }
    }
    printf("\n");
    return 0;
}