#include<stdio.h>

int main();

int main(void){

    char buf[100];
    float n, m;

    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%f", &n);
    n *= 0.01;

    printf("理想体重は%fです．\n", (n*n)*22);


    return 0;
}