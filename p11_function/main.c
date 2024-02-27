#include<stdio.h>

int main();
void swap(int* p1, int* p2);

int main(void){

    int a = 10;
    int b = 20;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int* p1, int* p2){
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}