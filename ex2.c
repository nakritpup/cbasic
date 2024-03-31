#include<stdio.h>
int main(){

    printf("hello world\n");
    printf("don't worry be happy.\n");
    int age;
    int Age;
    double price;
    age = 14;
    Age = 99; 
    price = 899.75;
    int score = 70;
    price = price*1.1;

    printf("%d\n",age);
    printf("%f\n",price);
    printf("%.2f\n",price);

    char *hero = "spiderman";
    printf("%s\n",hero);
    char country[] = "Thailand";

    printf("%s\n",country);

    return 0;
}