#include <stdio.h>
int main(void){
    int x, y, z, sum=0;
    scanf("%d%d",&x,&y);
    if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12){
        z = 31 - y;
    }
    else if(x == 4 || x == 6 || x == 9 || x == 11){
        z = 30 - y;

    }
    else if(x==2){
        z = 28 - y;
    }
    for(int i = x; i >= 1; i--){
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            sum += 31;
        }
        else if(i == 4 || i == 6 || i == 9 || i == 11){
            sum += 30;
        }
        else if(i==2){
            sum += 28;
        }
    }
    int result = sum - z;
    if(result%7 == 1){
        printf("MON\n");
    }
    else if(result%7 == 2){
        printf("TUE\n");
    }
    else if(result%7 == 3){
        printf("WED\n");
    }
    else if(result%7 == 4){
        printf("THU\n");
    }
    else if(result%7 == 5){
        printf("FRI\n");
    }
    else if(result%7 == 6){
        printf("SAT\n");
    }
    else{
        printf("SUN\n");
    }
    return 0;
}