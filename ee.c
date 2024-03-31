#include <stdio.h>

int main() {
    int a = 65;

    if (printf("%d", a)) {
        printf("ตัวแปร a เป็น int\n");
    } else {
        printf("ตัวแปร a เป็น string\n");
    }

    return 0;
}