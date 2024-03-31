#include<stdio.h>
int main(){
    int i,j,k;
    // for(x=1;x<=10;x++){
    //     if(x==5)continue;
    //     printf("%d ",x);
    // }
    /**for loop*/
    for(i=0;i<5;i++)
        //printf("%d",i);
    /**while loop*/
    j = 1;
    while(j<=5){
        printf("%d",j);
        j++;
    }
    /**do-while loop*/
    k = 1;
    do{
        printf("Insert Number : ");
        scanf("%d\n",&k);
    }while(k<1);
    printf("Exit\n");
    return 0;
}