#include<stdio.h>

int main();

int main(void){
    int x;
    x = 123;
    int *p = &x;
    printf("%p\n", p);
    printf("%d\n", *p);
    return 0;
}