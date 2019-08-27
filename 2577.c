#include <stdio.h>
int main(void){
    int a,b,c;
    int arr[10] = {0};
    scanf("%d%d%d",&a,&b,&c);
    int answer = a*b*c;
    while(answer != 0){
        arr[answer%10] += 1;
        answer /= 10;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n",arr[i]);
    }
}