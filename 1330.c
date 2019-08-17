#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a < b){
        printf("<\n");
    }
    else if(a > b){
        printf(">\n");
    }
    else{
        printf("==\n");
    }
}