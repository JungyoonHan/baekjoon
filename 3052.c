#include <stdio.h>
int main(void){
    int arr[10] = {0};
    int arr2[42] = {0};
    int n = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&arr[i]);
        arr2[arr[i]%42] += 1;
    }
    for(int j = 0; j < 42; j++){
        if(arr2[j] != 0){
            n++;
        }
    }
    printf("%d\n",n);
}