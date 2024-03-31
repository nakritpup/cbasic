#include <stdio.h>

int Length(int x[]) {
    int count = 0;
    while (x[count] != '\0') {
        count++;
    }
    return count;
}

int Max(int x[]) {
    int ans = x[0];
    for (int i = 1; i < Length(x); i++) {
        if (ans < x[i]) {
            ans = x[i];
        }
    }
    return ans;
}

int main() {
    int x[100];
    int i = 0;
    while (i<5) {
        printf("Enter integers :");
        scanf("%d", &x[i]);
        i++;
        if(i==5){
            x[i] = '\0';
        }
    }
    printf("Max = %d", Max(x));
    return 0;
}

