#include <stdio.h>
int main(void){
    int arr[8];
    int n = 0;
    for(int i = 0 ; i < 8;  i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j < 7 ; j++){
        int d = arr[j+1]-arr[j];
        if(d == 1){
            n += d;
        }
        else if(d == -1){
            n += d;
        }
        else{
            continue;
        }
    }
    if(n == 7){
        printf("ascending\n");
    }
    else if(n == -7){
        printf("descending\n");
    }
    else{
        printf("mixed\n");
    }
}