#include<stdio.h>
int main(){
    int count;
    float array[10];
    for(count=0;count<10;count++){
        printf("Please enter score for %d member of array : ",count+1);
        scanf("%f",&array[count]);
    }for(count=0;count<10;count++){
        printf("Member %d score = %.2f\n",count+1,array[count]);
    }
    printf("Member %d score = %.2f\n",count,array[count]);
    return 0;
}