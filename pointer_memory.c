#include<stdio.h>
#include<stdlib.h>
int main(){
    // int *p= NULL;
    // char *s;
    // p = (int *)malloc(sizeof(int));
    // *p = 5;
    // printf("int size: %d\n",sizeof(int));
    // printf("Address p: %p\n",p);
    // printf("Value p: %d\n",p);
    // free(p);
    // s =(char*)malloc(10*sizeof(char));
    // *s ='N';
    // s[1] ='a';
    // s[2] ='k';
    // s[3] ='r';
    // s[4] ='i';
    // s[5] ='t';
    // printf("Value s: %s\n",s);
    // free(s);


    int num;
    char *str;

    printf("Enter number of characters: ");
    scanf("%d", &num);
    str = (char *)malloc((num) * sizeof(char));
    for (int i = 0; i < num; i++) {
        printf("Enter character: ");
        scanf(" %c", &str[i]); 
    }


    printf("Entered string is: %s\n", str);

    free(str);

    return 0;
}

