#include <stdio.h>
int main(void){
    int a, b, c;
    scanf("%d%d%d",&a, &b, &c);
    int d = (a+b)%c;
    int e = (a%c + b%c)%c;
    int f = (a*b)%c;
    int g = (a%c * b%c)%c;
    printf("%d\n%d\n%d\n%d\n",d,e,f,g);
    return 0;
}