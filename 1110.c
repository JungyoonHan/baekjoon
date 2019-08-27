#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d",&a);
    int answer = a;
    int i = 1;
    while(1){
        if(a < 10){
            b = 0;
            c = a;
        }
        else{
            c = a%10;
            b = (a-c)/10;
        }
        d = b+c;
        b = c;
        if(d >= 10){
            c = d-10;
        }
        else{
            c = d;
        }
        a = b*10+c;
        if(a == answer){
            printf("%d\n",i);
            break;
        }
        i++;
    }
}