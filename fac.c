#include <stdio.h>

long fac(int num1){
   // if (num > 0 && num < 100) {
    if (num1 == 0){
        return 1;
    }else{
    return num1 * fac( num1 - 1);
    }
   
}

int main() {
  int n;
  printf("Insert Num : ");
  scanf("%d\n", &n);
   printf("Factorial = %d", fac(n));
   //printf("Factorial = %d", n);
    return 0;
}
//Tips:  Run for check input format