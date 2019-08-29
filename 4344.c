#include <stdio.h>
int main(void){
    int n, num;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        double result, sum = 0.0, over = 0.0;
        scanf("%d",&num);
        int arr[num];
        for(int j = 0; j < num; j++){
            scanf("%d",&arr[j]);
            sum += arr[j];
        }
        int mean = sum/num;
        for (int k = 0; k < num; k++){
            if(arr[k] > mean){
                over++;
            }
        }
        result = over/num*100;
        printf("%.3f%%\n",result);
    }
}