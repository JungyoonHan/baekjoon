#include <stdio.h>
int main(void){
    int n;
    double a, b = 0, sum = 0;
    scanf("%d",&n);
    double s[n];
    for(int i = 0; i < n; i++){
        scanf("%lf",&a);
        s[i] = a;
    }
    for(int j = 0; j < n; j++){
        if(s[j] > b){
            b = s[j];
        }
    }
    for(int k = 0; k < n; k++){
        s[k] = s[k]/b*100;
        sum += s[k];
    }
    printf("%.2f\n",sum/n);
    return 0;
}