#include <stdio.h>
int main(void){
    int a, b;
    scanf("%d%d",&a,&b);
    if(b >= 45){
        b = b-45;
    }
    else{
        b = 60-(45-b);
        if(a == 0){
            a = 23;
        }
        else{
            a--;
        }
    }
    printf("%d %d\n",a,b);
}