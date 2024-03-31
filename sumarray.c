#include<stdio.h>
int main(){
    int sum[5][5];
    int a[2][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10}
    };
    int b[2][5] ={
        {2,4,6,8,10},
        {1,3,5,7,9}
    };
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
