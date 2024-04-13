#include <stdio.h>

int main()
{

    char a = 'a';
    char b[6] = "hello"; // +1 =\n
    int c = 10;
    float d = 10.5;
    double e = 10.5;
    long long f = 10000000000;

    // printf("a: %ld\n", sizeof(a)); // sizeof() คำสั่งเช็คขนาดตัวแปร
    // printf("b: %ld\n", sizeof(b));
    // printf("c: %ld\n", sizeof(c));
    // printf("d: %ld\n", sizeof(d));
    // printf("e: %ld\n", sizeof(e));
    // printf("f: %ld\n", sizeof(f));
    printf("address b : %p, value b : %c\n",&b[0],b[0]);
    printf("address b : %p, value b : %c\n",&b[1],b[1]);
    printf("address b : %p, value b : %c\n",&b[2],b[2]);
    printf("address b : %p, value b : %c\n",&b[3],b[3]);
    printf("address b : %p, value b : %c\n",&b[4],b[4]);
    printf("address b : %p, value b : %c\n",&b[5],b[5]);
    printf("address b : %p, value b : %c\n",&b[6],b[6]);
    //printf("address b : %p, value b : %c\n",&b[7],b[7]);
    return 0;
}