#include<stdio.h>
void demostr(){
    char *str = "rainbow";
    printf("str = %s\n",str);
     printf("str = %10s\n",str);
     printf("str = %-10s\n",str);
      printf("str = %.4s\n",str);
    printf("str = %.*s",4,str);
}

void demoaddr(){
    int i = 10;
    int j = 20;
    printf("i =%d (%p)\n",i, &i);
    printf("j =%d (%p)\n",j, &j);
    char *str = "rainbow";
    char str2[] = "sunday";
    printf("str = %s (%p)\n",str,str);
    printf("str2 = %s (%p)\n",str2,str2);
    for(int i = 0; i < strlen(str2);++i){
        printf("str[%d] = %c (%p)\n",i,str2[i],&str2[i]);
    }
}
int main(){
    demoaddr();

    return 0;
}