#include<stdio.h>

int main() {
    char word[5][12] = {"Hello", "World", "C", "Programming", "Language"};
    for (int i = 0; i < 5; i++)
        printf("%s\n", word[i]);
    
    return 0;
}
