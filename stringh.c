#include<stdio.h>
#include<string.h>
int main(){
    char str[8] = "Nakrit";
    char str2[8] = "\0";
    char str3[8] = "Aree";
    strcpy(str2,str);//same as str = str2
    printf("str2: %s\n",str2);

    strcat(str,str3);
    printf("str: %s\n",str);

    char a[5]="abcd";
    char b[5] = "abcf";
    //equal = 0,a>b = 1,a<b =-1
    printf("strcmp(a,b): %d\n",strcmp(a,b));
    return 0;
}