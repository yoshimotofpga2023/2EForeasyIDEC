#include<stdio.h>

int main();
int sum(int x, int y);

int main(void){

    int a,b;
    a = 3;
    b = 2;
    int n = sum(a, b);
    printf("n‚Ì’lF %d\n", n);
    return 0;
}

int sum(int x, int y){
    return x + y;
}