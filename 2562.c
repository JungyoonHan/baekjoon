#include <stdio.h>
int main(void){
    int arr[9], j;
    int max = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d",&arr[i]);
        if(arr[i] >= max){
            max = arr[i];
            j = i+1;
        }
    }
    printf("%d\n%d\n",max,j);
}