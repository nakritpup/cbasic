#include<stdio.h>
#include<string.h>

int main(){
    int a =10;
    int b =20;
    int c =30;
    int *ip; //ตัวแปร pointer ต้องใช้ * ประกาศ
    printf("Address of a: %p, Value of a %d\n",&a,a);
    printf("Address of b: %p, Value of b %d\n",&b,b);
    printf("Address of c: %p, Value of c %d\n",&c,c);

    //ip = &a;//ให้ ip ชี้ไปที่ a'
     ip = &b;
    // ip = &c;
    printf("Address of ip: %p\n",ip);//ไม่มี * = ใช้ดู address
    printf("Value of ip: %d\n",*ip);//ใส่ * เพื่อดูค่า

    *ip = 100;//เปลี่ยนค่า
    printf("Address of ip: %p\n",ip);
    printf("Value of ip: %d\n",*ip);
    printf("Address of b: %p, Value of b %d\n",&b,b);
    return 0;
}