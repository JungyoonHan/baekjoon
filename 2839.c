#include <stdio.h>
int main(void){
    int n, sum=0;
    scanf("%d",&n);
    while(n > 0){
        if(n % 5 == 0){
            sum++;
            n -= 5;
        }
        else if(n % 3 == 0){
            sum++;
            n -= 3;
        }
        else if(n > 5){
            n -= 5;
            sum++;
        }
        else{
            sum = -1;
            break;
        }
    }
    printf("%d\n",sum);
    return 0;
}